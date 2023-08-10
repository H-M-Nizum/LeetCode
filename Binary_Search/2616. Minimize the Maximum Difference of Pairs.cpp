class Solution {
public:
    int minimizeMax(vector<int>& nums, int p) {
        if(p==0){
            return 0;
        }
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int l = 0;
        int r = 1e9;
        int ans = -1;
        while(l <= r){
            int mid = (l+r)/2;
            int c = 0, j = 0;
            while(j+1 < n){
                if(nums[j+1] - nums[j] > mid){
                    j += 1;
                    continue;
                }
                c += 1;
                j += 2;
            }
            if(c >= p){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return ans;
    }
};