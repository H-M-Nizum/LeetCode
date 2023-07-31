class Solution {
public:
    int binarySearch(vector<int> arr, int l, int r, int x){
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x)
                return m;
            if (arr[m] < x)
                l = m + 1;
            else
                r = m - 1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        return binarySearch(nums, 0, n-1, target);
    }
};