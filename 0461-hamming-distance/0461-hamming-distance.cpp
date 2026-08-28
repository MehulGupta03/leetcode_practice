class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x^y;
        int count = 0;
        while(diff>0){
            if(diff%2==1){
                count++;
            }
            diff/=2;
        }
        return count;
    }
};