class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;
        for(int i:nums){
            freq[i]++;
        }
        for(auto it:freq){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int sum=0;
        for(int i:s){
            sum += i;
        }
        int sum2 = 0;
        for(int i=1;i<=nums.size();i++){
            sum2+=i;
        }
        ans.push_back(sum2-sum);
        return ans;
    }
};