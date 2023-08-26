class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());
        int c = 1, n = pairs.size();

        vector<int> ans(n, 1);
        
        for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(pairs[i][0] > pairs[j][1])
                    ans[i] = max(ans[i], ans[j] + 1);
            }
        }
        
        return ans[n - 1];

    }
    
};