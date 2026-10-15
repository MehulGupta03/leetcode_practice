class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> myset;
        for(int i : nums){
            myset.insert(i);
        }
        vector<int> ans(myset.rbegin(), myset.rend());
        // sort(ans.begin(), ans.end(), greater<int>());
        if(ans.size()<3){
            return ans[0];
        }
        return ans[2];
    }
};