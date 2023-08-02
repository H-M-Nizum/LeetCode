class Solution {
public:
    void display(vector<int> nums, int n, vector<int> cur, vector<vector<int>> &tem){
        for (int i = 0; i < n; i++) {
            cur.push_back(nums[i]);
        }
        tem.push_back(cur);
        cur.clear();
    }
    
    void findPermutations(vector<int> nums, int n, vector<int>cur, vector<vector<int>> &tem){
        
        sort(nums.begin(), nums.end());
        
        do {
            display(nums, n, cur,tem);
        } while (next_permutation(nums.begin(), nums.end()));
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> tem;
        vector<int> cur = {};
        findPermutations(nums, n, cur, tem);
        return tem;
    }
};