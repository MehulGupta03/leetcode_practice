class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int result = 0;
        for(char ch : s){
            if(ch==')') result--;
            if(result) {
                ans+=ch;
            }
            if(ch=='(') result++;
        }
        return ans;
    }
};