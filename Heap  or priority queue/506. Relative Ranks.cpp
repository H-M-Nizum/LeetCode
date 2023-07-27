class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        priority_queue<pair<int, int>> p;
        int n = score.size();
    
        for(int i=0; i<n; i++){
            p.push({score[i], i});
        }
        vector<string> ans(n);
        int c = 1;
        while(!p.empty()){
            if(c == 1){
                ans[p.top().second] = "Gold Medal";
                p.pop();
            }
            else if(c == 2){
                ans[p.top().second] = "Silver Medal";
                p.pop();
            }
            else if(c == 3){
                ans[p.top().second] = "Bronze Medal";
                p.pop();
            }
            else{
                ans[p.top().second] = to_string(c);
                p.pop();
            }
            c++;
        }
        return ans;
    }
};