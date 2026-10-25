class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            int currsum = 0;
            for(int j=i;j<nums.size();j++){
                currsum+=nums[j];
                if(currsum==k){
                    count++;
                }
            }
        }
        return count;
    }
};