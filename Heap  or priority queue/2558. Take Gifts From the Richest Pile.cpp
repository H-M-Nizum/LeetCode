class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> p;

        for(int i:gifts){
            p.push(i);
        }
        while(k--){
            if(!p.empty()){
                int x = p.top();
                p.pop();
                p.push(floor(sqrt(x)));
            }
        }
        long long ans = 0;
        while(!p.empty()){
            ans += p.top();
            p.pop();
        }
        return ans;
    }
};