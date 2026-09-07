class Solution {
  public:
    string reverse(const string& S) {
        // code here
        stack<char> s;
        for(int i=0;i<S.size();i++){
            char ch = S[i];
            s.push(ch);
        }
        string result = "";
        while(!s.empty()){
            result+=s.top();
            s.pop();
        }
        return result;
    }
};