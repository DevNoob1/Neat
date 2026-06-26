class Solution {
public:
    int maxArea(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int m=0;
        while(l<r){
            int a=(r-l)*(min(h[l],h[r]));
            m=max(m,a);
            if(h[l]<h[r]) l++;
            else r--;
        }
        return m;
    }
};
