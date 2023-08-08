class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1, ans = -1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] == target){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }
        int l = 0, h = nums.size()-1, ans1 = -1;
        while(l <= h){
            int m = l + (h -l) / 2;
            if(nums[m] == target){
                ans1 = m;
                l = m + 1;
            }
            else if(nums[m] < target){
                l = m + 1;
            }
            else{
                h = m - 1;
            }

        }
        return {ans, ans1};
        
    }
};