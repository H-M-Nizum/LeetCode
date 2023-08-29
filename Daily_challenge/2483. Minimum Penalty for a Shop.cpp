class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> arrn;
        vector<int> arry;
        int cn=0;
        int cy=0;
        arrn.push_back(0);
        for(int i=0; i<n; i++){
            if(customers[i]=='N'){
                cn++;
            }
            arrn.push_back(cn);
        }
        for(int i=n-1; i>=0; i--){
            if(customers[i]=='Y'){
                cy++;
            }
            arry.push_back(cy);
        }
        reverse(arry.begin(), arry.end());
        int ans = 1000000;
        int in = -1;
        for(int i=0; i<n; i++){
            if(ans>arry[i]+arrn[i]){
                ans = arry[i]+arrn[i];
                in = i;
            }


        }
        if(ans > arrn[n]){
            return n;
        }

        return in;
    }
};