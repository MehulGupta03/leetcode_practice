class Solution {
public:
    int minBitFlips(int start, int goal) {
        int diff = start^goal;
        int count=0;
        while(diff>0){
            if(diff%2==1){
                count++;
            }
            diff/=2;
        }
        return count;
    }
};