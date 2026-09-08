class Solution {
  public:
    stack<int> insertAtBottom(stack<int> &st, int x) {
        // code here
        stack<int> s;
        while(!st.empty()){
            s.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!s.empty()){
            st.push(s.top());
            s.pop();
        }
        return st;
    }
};