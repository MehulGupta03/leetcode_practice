class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> ans1;
        vector<int> ans2;
        vector<int> res;
        ans1.push_back(nums[0]);
        ans2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            // int m = ans1.size()-1;
            // int n = ans2.size()-1;
            if(ans1[ans1.size()-1]>ans2[ans2.size()-1]){
                ans1.push_back(nums[i]);
            }
            else{
                ans2.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans2.size();i++){
            ans1.push_back(ans2[i]);
        }
        
        return ans1;
    }
};