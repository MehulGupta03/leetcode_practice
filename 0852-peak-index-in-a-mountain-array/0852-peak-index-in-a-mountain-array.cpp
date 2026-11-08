class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=INT_MIN;
        int idx;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max=arr[i];
                idx=i;
            }
        }
        return idx;
    }
};