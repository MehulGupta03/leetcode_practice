class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        set<int> s(nums.begin(), nums.end());
        vector<int> ans(s.begin(), s.end());
        int len = 1;
        int maxlen = 1;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i+1]-ans[i]==1){
                len++;
            }
            else{
                len=1;
            }
            maxlen = max(maxlen, len);
        }
        return maxlen;
    }
};