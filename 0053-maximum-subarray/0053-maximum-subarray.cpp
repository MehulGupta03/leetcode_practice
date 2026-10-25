class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0;
        int maxsum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            currsum = max(nums[i], currsum+nums[i]);
            maxsum = max(maxsum, currsum);
        }
        return maxsum;
    }
};