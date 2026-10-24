// class Solution {
// public:
//     int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
//         int ali_arr = stoi(arriveAlice.substr(3,2));
//         int ali_leave = stoi(arriveAlice.substr(3,2));
//         int bob_arr = stoi(arriveBob.substr(3,2));
//         int bob_leave = stoi(arriveBob.substr(3,2));
//         int count = 0;
//         for(int i=ali_arr; i<=ali_leave; i++){
//             for(int j=bob_arr; j<=bob_leave; j++){
//                 if(i==j){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
int countDaysTogether(string arriveAlice, string leaveAlice,
string arriveBob, string leaveBob) {

    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    auto convert = [&](string date) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));

        for (int k = 0; k < month - 1; k++) {
            day += days[k];
        }

        return day;
    };

    int ali_arr = convert(arriveAlice);
    int ali_leave = convert(leaveAlice);
    int bob_arr = convert(arriveBob);
    int bob_leave = convert(leaveBob);

    int count = 0;

    for (int i = ali_arr; i <= ali_leave; i++) {
        for (int j = bob_arr; j <= bob_leave; j++) {
            if (i == j) {
                count++;
            }
        }
    }

    return count;
}

};
