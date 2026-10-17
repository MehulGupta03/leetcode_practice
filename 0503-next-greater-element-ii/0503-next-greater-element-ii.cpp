class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans(nums.size(), -1);
        stack<int> s;
        // s.push(-1);
        for(int i=2*nums.size()-1;i>=0;i--){
            int curr = nums[i%nums.size()];
            while(!s.empty() && s.top()<=curr){
                s.pop();
            }
            if(i < nums.size() && !s.empty()){
                ans[i] = s.top();
            }
            s.push(curr);
        }
        return ans;
    }
};