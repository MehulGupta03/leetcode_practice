class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0;
        while(true){
            bool sorted = true;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]>nums[i+1]){
                    sorted = false;
                    break;
                }
            }
            if(sorted){
                return count;
            }
        int minsum = INT_MAX;
        int idx = -1;
    
        for(int i=0;i<nums.size()-1;i++){
            int currsum = nums[i]+nums[i+1];
            if(currsum < minsum){
                minsum = currsum;
                idx = i;
            }
        }
        nums[idx]=minsum;
        nums.erase(nums.begin()+idx+1);
        count++;
        }  
    }
};