class Solution {
public:
    int tallestBillboard(vector<int>& rods) {
       int sum = 0;
        for (int n : rods) {
            sum += n;
        }

        int dp[sum + 1];
        dp[0] = 0;
        for (int i=1; i<=sum; i++) {
            dp[i] = -1;
        }
        for (int n : rods) {
            int dpCopy[sum + 1];
            copy(dp, dp + (sum + 1), dpCopy);

            for (int i=0; i<=sum-n; i++) {
                if (dpCopy[i] < 0) 
                    continue;

                dp[i + n] = max(dp[i + n], dpCopy[i]);
                dp[abs(i - n)] = max(dp[abs(i - n)], dpCopy[i] + min(i, n));
            }
        }
        return dp[0];
        
    }
};