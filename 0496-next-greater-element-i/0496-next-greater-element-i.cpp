class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int j = nums2.size();
        stack<int> s1;
        stack<int> s2;
        s1.push(-1);
        s2.push(-1);
        vector<int> ans(n);
        vector<int> ans2(j);
        for(int i=n-1; i>=0; i--){
            int curr = nums1[i];
            while(!s1.empty() && s1.top()<=nums1[i]){
                s1.pop();
            }
            if(s1.empty()){
                ans[i] = -1;
            }
            else{
                ans[i] = s1.top();
            }
            s1.push(curr);
        }
        for(int i=j-1; i>=0; i--){
            int curr = nums2[i];
            while(!s2.empty() && s2.top()<=nums2[i]){
                s2.pop();
            }
            if(s2.empty()){
                ans2[i] = -1;
            }
            else{
                ans2[i] = s2.top();
            }
            s2.push(curr);
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans[i] = ans2[j];
                    break;
                }
            }
        }
        return ans;
    }
};