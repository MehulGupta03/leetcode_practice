class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = -1;
        int end = -1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    start = i;
                    end = j;
                }
            }
        }
        return {start, end};
    }
};