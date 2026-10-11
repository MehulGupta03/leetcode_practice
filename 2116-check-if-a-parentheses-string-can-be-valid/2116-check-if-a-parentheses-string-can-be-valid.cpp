class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();

        if (n % 2 != 0) {
            return false;
        }

        stack<int> st;
        stack<int> unlocked;

        for (int i = 0; i < n; i++) {
            if (locked[i] == '0') {
                unlocked.push(i);
            }
            else if (s[i] == '(') {
                st.push(i);
            }
            else {
                if (!st.empty()) {
                    st.pop();
                }
                else if (!unlocked.empty()) {
                    unlocked.pop();
                }
                else {
                    return false;
                }
            }
        }

        while (!st.empty() && !unlocked.empty()) {
            if (st.top() > unlocked.top()) {
                return false;
            }

            st.pop();
            unlocked.pop();
        }

        return st.empty();
    }
};