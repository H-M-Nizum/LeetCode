class Solution {
public:

    int count[1001];
    int direct[1001][1001];
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        for(vector<int> i: roads){
            count[i[0]]++;
            count[i[1]]++;
            direct[i[0]][i[1]] = 1;
            direct[i[1]][i[0]] = 1;
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                ans = max(ans, count[i] + count[j] - direct[i][j]);
            }
        }
        return ans;
        
    }
};