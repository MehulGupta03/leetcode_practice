class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod =1 ;
        int temp=n;
        while(temp>0){
            int last = temp%10;
            sum=sum+last;
            prod = prod*last;
            temp = temp/10;
        }
        return n%(sum+prod)==0;
    }
};