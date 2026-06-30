class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int s=0;
        for (auto i:tokens){
            if (i == "+" || i == "-" || i == "*" || i == "/"){
                int right=st.top(); st.pop();
                int left=st.top(); st.pop();
            if (i == "+") {
                st.push(left + right);
            }
            else if (i == "-") {
                st.push(left - right);
            }
            else if (i == "*") {
                st.push(left * right);
            }
            else {  // "/"
                st.push(left / right);
            }
            }
            else st.push(stoi(i));
        }
        return st.top();
    }
};
