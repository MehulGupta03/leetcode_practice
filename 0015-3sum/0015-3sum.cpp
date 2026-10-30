class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
                int sum = nums[i]+nums[low]+nums[high];
                if(sum==0){
                    vector<int> temp ={nums[i], nums[low], nums[high]};
                    st.insert(temp);
                    low++;
                    high--;
                }
                else if(sum<0){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};