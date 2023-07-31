class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0, j=n-1; i<n, j>=0; i++, j--){
            if(nums[i] != i){
                return i;
            }
            if(nums[j] != j+1){
                return j+1;
            }
        }
        return 0;
    }
};