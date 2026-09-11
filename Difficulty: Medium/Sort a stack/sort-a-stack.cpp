class Solution {
  public:
    void sortedstack(stack<int> &s, int num){
        if(s.empty() || (!s.empty() && s.top() < num)){
            s.push(num);
            return ;
        }
        int n = s.top();
        s.pop();
        sortedstack(s, num);
        s.push(n);
    }
    void sortStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int num = st.top();
        st.pop();
        sortStack(st);
        sortedstack(st, num);
    }
};
