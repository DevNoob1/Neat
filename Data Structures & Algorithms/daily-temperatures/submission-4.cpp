class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>res;
        vector<int>v(t.size(),0);
        for(int i=0;i<t.size();i++){
            while(!(res.empty()) && t[i]>t[res.top()]){
                int pr=res.top();
                res.pop();
                v[pr]=i-pr;
            }
            res.push(i);
        }
        return v;
    }
};
