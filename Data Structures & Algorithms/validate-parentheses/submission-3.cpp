class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char a : s) {
            if (a != '(' && a != '{' && a != '[' && a != ')' && a != '}' && a != ']')
                continue;
            if (a == '(' || a == '{' || a == '[') {
                st.push(a);
            }
            else if (!st.empty() && a  == ')' && st.top() == '(')
                st.pop();
            else if (!st.empty() && a  == '}' && st.top() == '{')
                st.pop();
            else if (!st.empty() && a  == ']' && st.top() == '[')
                st.pop();
            else
                return false;
        }
        if (st.empty())
            return true;
        else
            return false;
    }
};
