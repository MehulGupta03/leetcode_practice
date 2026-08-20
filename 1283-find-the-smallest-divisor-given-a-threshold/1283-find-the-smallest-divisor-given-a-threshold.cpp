class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = 1e6;
        while(left<right){
            int mid = (left+right)/2;
            int sum=0;
            for(int i : nums){
                sum+= (i+mid-1)/mid;
            }
            if(sum>threshold){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return left;
    }
};