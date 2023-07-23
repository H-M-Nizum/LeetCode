class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int l = nums.size();
        int m = nums[0];
        for(int i=1; i<l; i++){
            nums[i] = nums[i] + nums[i-1];
            m = min(m, nums[i]);
        }

        if(m < 0)
            return abs(m)+1;  
        else
            return 1;      
    }
};