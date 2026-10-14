class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        string si = "";
        for(char i=0;i<s.size();i++){
            char curr = s[i];
            if(!st.empty() && abs(st.top() - curr) == 32){
                st.pop();
            }
            else{
                st.push(curr);
            }
        }
        while(!st.empty()){
            si.push_back(st.top());
            st.pop();
        }
        reverse(si.begin(), si.end());
        return si;
    }
};