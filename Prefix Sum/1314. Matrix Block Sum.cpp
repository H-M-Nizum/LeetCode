class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            for(int j=1; j<m; j++){
                mat[i][j] += mat[i][j-1];
            }
        }

        for(int i=0; i<n; i++){
            vector<int> tem;
            for(int j=0; j<m; j++){
                int r1 = max(i-k, 0);
                int r2 = min(i+k, n-1);
                int c1 = j-k;
                int c2 = min(j+k, m-1);
                int sum = 0;
                for(int x=r1; x<=r2; x++){
                    if(c1 > 0){
                        sum += (mat[x][c2] - mat[x][c1-1]);
                    }
                    else{
                        sum += mat[x][c2];
                    }
                }
                tem.push_back(sum);
            }
            ans.push_back(tem);
        }
        return ans;
    }
};