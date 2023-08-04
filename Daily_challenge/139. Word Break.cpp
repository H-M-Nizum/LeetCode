class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        int dp[n+1];
        memset(dp, 0, sizeof dp);
        dp[n] = 1;

        unordered_set<string> ans;
        for(string& i:wordDict){
            ans.insert(i);
        }
        for(int i=n-1; i>=0; i--){
            string tem;
            for(int j=i; j<n; j++){
                tem.push_back(s[j]);
                if(ans.find(tem) != ans.end()){
                    if(dp[j+1]){
                        dp[i] = 1;
                    }
                }
            }
        }
        return dp[0];
        
    }
};