class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int val = tickets[k];
        int ans = 0;
        for(int i:tickets){
            if(i < val){
                ans += i;
            }
            else{
                ans += (val - 1);
            }
        }
        for(int i=0; i<=k; i++){
            if(tickets[i] >= val){
                ans += 1;
            }
        }
        return ans;
    }
};