class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int min=nums[0];
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
            if(nums[i]>max){
                max=nums[i];
            }
        }
        vector<int> ans;
        for(int i=min; i<=max;i++){
            bool found=false;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    found=true;
                    break;
                }
            }
            if(!found){
                ans.push_back(i);
            }
        }
        return ans;
    }
};