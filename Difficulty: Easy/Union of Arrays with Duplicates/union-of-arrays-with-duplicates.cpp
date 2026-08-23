class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> arr;
        for(int i=0;i<a.size();i++){
            arr.insert(a[i]);
        }
        for(int j=0;j<b.size();j++){
            arr.insert(b[j]);
        }
        return vector<int>(arr.begin(), arr.end());
    }
};