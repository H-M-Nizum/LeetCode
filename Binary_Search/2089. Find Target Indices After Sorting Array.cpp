class Solution {
public:
    // int binarySearch_first(vector<int> arr, int l, int r, int x){
    //     int ans = -1;
    //     while (l <= r) {
    //         int m = l + (r - l) / 2;
    //         if (arr[m] == x)
    //             ans = m;
    //             r = m - 1;
    //         if (arr[m] < x)
    //             l = m + 1;
    //         else
    //             r = m - 1;
    //     }
    //     return ans;
    // }
    // int binarySearch_last(vector<int> arr, int l, int r, int x){
    //     int ans = -1; 
    //     while (l <= r) {
    //         int m = l + (r - l) / 2;
    //         if (arr[m] == x)
    //             ans = m;
    //             l = m + 1;
    //         if (arr[m] < x)
    //             l = m + 1;
    //         else
    //             r = m - 1;
    //     }
    //     return ans;
    // }
    int first(vector<int> arr, int low, int high, int x, int n){
        if (high >= low) {
            int mid = low + (high - low) / 2;
            if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
                return mid;
            else if (x > arr[mid])
                return first(arr, (mid + 1), high, x, n);
            else
                return first(arr, low, (mid - 1), x, n);
        }
        return -1;
    }
 

    int last(vector<int>arr, int low, int high, int x, int n){
        if (high >= low) {
            int mid = low + (high - low) / 2;
            if ((mid == n - 1 || x < arr[mid + 1])
                && arr[mid] == x)
                return mid;
            else if (x < arr[mid])
                return last(arr, low, (mid - 1), x, n);
            else
                return last(arr, (mid + 1), high, x, n);
        }
        return -1;
    }

    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = first(nums, 0, n-1, target, n);
        int r = last(nums, 0, n-1, target, n);
        if(l == -1 || r == -1){
            return ans;
        }
        for(int i=l; i<=r; i++){
            ans.push_back(i);
        }
        return ans;


        // #1,
        // int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        // int r = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        // if(l==r){
        //     return ans;
        // }
        // else{
        //     for(int i=l; i<r; i++){
        //         ans.push_back(i);
        //     }
        //     return ans;
        // }
        // #2.
        // int n = nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i] == target){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        
    }
};