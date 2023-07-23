class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
            sum += nums[i];
        int rSum = 0;
        for(int i = 0; i < n; i++){
            if(rSum == (sum - nums[i])/2.0)
                return i;
            rSum += nums[i];
        }
        return -1;
    }
        
};