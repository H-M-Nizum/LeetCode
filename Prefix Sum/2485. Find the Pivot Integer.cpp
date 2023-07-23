class Solution {
public:
    int pivotInteger(int n) {
        int pre[n];
        pre[0] = 1;
        for(int i=2; i<=n; i++){
            pre[i-1] = i + pre[i-2];
        }

        int suf[n];
        suf[n-1] = n;
        for(int i=n-1; i>0; i--){
            suf[i-1] = i + suf[i];
        }
        for(int i=0; i<n; i++){
            if(pre[i] == suf[i]) return i+1;
        }
        return -1;
    }
};