class Solution {
public:
    int trap(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int lmax=0;
        int res=0;
        int rmax=0;
        while(l<r){
            if(h[l] < h[r] ){
                lmax=max(lmax,h[l]);
                res+=lmax-h[l];
                l++;
            }
            else{
                rmax=max(rmax,h[r]);
                res+=rmax-h[r];
                r--;
            }
        }
        return res;
    }
};