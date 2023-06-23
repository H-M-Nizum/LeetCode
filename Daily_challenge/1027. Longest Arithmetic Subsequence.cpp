class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        int a[n][1001];
        memset(a, 0, sizeof(a));
        int ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                int result = nums[i] - nums[j] + 500;
                a[i][result] = a[j][result] + 1;
                ans = max(ans, a[i][result]);
            }
        }
        return ans+1;
    }
};