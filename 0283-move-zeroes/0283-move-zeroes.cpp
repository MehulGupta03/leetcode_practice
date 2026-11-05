class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                ans.push_back(nums[i]);
            }
        }
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());

        nums.insert(nums.end(), ans.begin(), ans.end());
    }
};