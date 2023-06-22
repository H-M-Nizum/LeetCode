class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int c = 0;
        int h = prices[0];
        for(int i=1; i<prices.size(); i++){
        c = max(c, prices[i] - h - fee);
        h = min(h, prices[i] - c);
        // cout<<"c: "<<c<<" h: "<<h<<endl;
        }
        return c;
    }
};