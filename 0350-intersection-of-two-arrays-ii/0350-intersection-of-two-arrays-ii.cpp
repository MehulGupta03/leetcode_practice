class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i : nums1){
            for(int j=0;j<nums2.size();j++){
                if(i==nums2[j]){
                    ans.push_back(i);
                    nums2[j]=-1;
                    break;
                }
            }
        }
        return ans;
    }
};