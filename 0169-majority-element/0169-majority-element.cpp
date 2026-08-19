class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                count++;
            }
            else{
                i=j;
                count=1;
            }
            if(count>nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};