class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                c = max(count,c);
            }
            else{
                count=0;
            }
        }
        return c;
    }
};