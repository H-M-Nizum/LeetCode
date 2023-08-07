class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            if(target <= matrix[i][m-1]){
                for(int j:matrix[i]){
                    if(j == target){
                        return true;
                    }
                }
                return false;
            }
        }
        return false;
        
    }
};