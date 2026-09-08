class Solution {
  public:
    void deleteMid(stack<int>& s) {
        // code here
        stack<int> st;
        int mid = s.size()/2;
        for(int i=0;i<mid;i++){
            st.push(s.top());
            s.pop();
        }
        s.pop();
        while(!st.empty()){
            s.push(st.top());
            st.pop();
        }
    }
};