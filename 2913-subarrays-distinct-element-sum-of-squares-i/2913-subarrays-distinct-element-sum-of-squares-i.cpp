class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                set<int> ans;
                for(int limit=i; limit<=j;limit++){
                    ans.insert(nums[limit]);
                }
                int a = ans.size();
                sum=sum+(a*a);
            }
        }
        return sum;
    }
};