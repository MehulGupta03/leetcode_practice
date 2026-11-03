class Solution {
public:
    int calculateScore(int a, int b) {
        string binary1 = bitset<16>(a).to_string();
        string binary2 = bitset<16>(b).to_string();
        int count1=0;
        int count2=0;
        for(int i=0;i<binary1.size();i++){
            if(binary1[i]=='1'){
                count1++;
            }
        }
        for(int i=0;i<binary2.size();i++){
            if(binary2[i]=='1'){
                count2++;
            }
        }
        if(count1>=count2){
            return count1*count2;
        }
        else{
            return count2/count1;
        }
    }
};