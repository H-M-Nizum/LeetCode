class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
        int pos = nums.size() - (upper_bound(nums.begin(), nums.end(), 0) - nums.begin());
        return max(neg, pos);
        
    }
};