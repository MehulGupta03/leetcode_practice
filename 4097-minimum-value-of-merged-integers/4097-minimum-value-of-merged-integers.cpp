class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i+=2){
            string n1 = to_string(nums[i])+to_string(nums[i+1]);
            int num = stoi(n1);
            mini = min(num, mini);
        }
        return mini;
    }
};