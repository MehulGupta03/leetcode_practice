class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char, int> freq;
       for(int i:s){
            freq[i]++;
       } 
    //    int idx=-1;
       for(int i=0;i<s.size();i++){
        if(freq[s[i]]==1){
            return i;
        }
       }
       return -1;
    }
};