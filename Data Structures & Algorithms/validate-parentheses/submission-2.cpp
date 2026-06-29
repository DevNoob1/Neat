class Solution {
public:
    bool isValid(string s) {
        unordered_map <char, char> mp={{')','('},{']','['},{'}','{'}        };
        stack<char>st;
        for (auto i:s){
            if (i=='('||i=='['||i=='{'){
                st.push(i);
            }
            else{
                if (st.empty()) return false;
                if (st.top()!=mp[i]) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
