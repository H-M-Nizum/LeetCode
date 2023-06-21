class Solution {
public:
    long long ans(vector<int>& nums, vector<int>& cost, int m) {
        long long result = 0LL;
        for (int i = 0; i < nums.size(); i++) {
            result += (1LL*abs(nums[i] - m)*cost[i]);
        }
        return result;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int fast = *min_element(nums.begin(), nums.end());
        int last = *max_element(nums.begin(), nums.end());
        long long total = 0;
        while(fast < last){
            int mid = (fast+last) / 2;
            long long c1 = ans(nums, cost, mid);
            long long c2 = ans(nums, cost, mid+1);
            if(c1<=c2){
                last = mid;
                total = c1;
            }
            else{
                fast = mid+1;
                total = c2;
            }
        }
        return total;
    }
};