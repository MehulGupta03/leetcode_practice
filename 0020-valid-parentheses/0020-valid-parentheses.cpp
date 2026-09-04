class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s){
            if(ch == '(' || ch == '[' || ch == '{'){
                st.push(ch);
            }
            if(ch == ')'){
                if(st.empty())
                return false;

                if(st.top() == '(')
                st.pop();

                else
                return false;
            }
            if(ch == ']'){
                if(st.empty())
                return false;

                if(st.top() == '[')
                st.pop();

                else
                return false;
            }
            if(ch == '}'){
                if(st.empty())
                return false;

                if(st.top() == '{')
                st.pop();

                else
                return false;
            }
        }
        return st.empty();
    }
};