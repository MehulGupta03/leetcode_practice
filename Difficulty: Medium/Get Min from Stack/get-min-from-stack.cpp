class SpecialStack {
  public:
    stack<int> st, minst;
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        st.push(x);
        if(minst.empty()){
            minst.push(x);
        }
        else{
            minst.push(min(x, minst.top()));
        }
        // Add an element to the top of Stack
    }

    void pop() {
        st.pop();
        minst.pop();
        // Remove the top element from the Stack
    }

    int peek() {
        if(st.empty()){
            return -1;
        }
        return st.top();
        // Returns top element of the Stack
    }

    bool isEmpty() {
        return st.empty();
        
        // Check if stack is empty
    }

    int getMin() {
        if(minst.empty()){
            return -1;
        }
        return minst.top();
        // Finds minimum element of Stack
    }
};