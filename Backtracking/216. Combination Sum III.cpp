class Solution {
public:
    // // ##### Recursive approce (Backtraking) ##########
    void solve(int index, vector<int> nums, vector<int> cur, vector<vector<int>> &tem, int k, int n){
        // chack sum(subset) == target.
        if(n == 0 && cur.size() == k){
            tem.push_back(cur);
            return;
       
        }
       
        for(int i=index; i<nums.size(); i++){
            cur.push_back(nums[i]);
            solve(i+1, nums, cur, tem, k, n-i);
            cur.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidates;
        for(int i=1; i<=9; i++){
            candidates.push_back(i);
        }

        vector<vector<int>> tem;
        vector<int> cur = {};
        // calculate all possile combination that sum == target.
        solve(0, candidates, cur, tem, k, n);

        return tem;
    }
};



// class Solution {
// public:
//     // // ##### Recursive approce (Backtraking) ##########
//     void solve(int start, int end, vector<int> cur, vector<vector<int>> &ans, int k, int n){
//         // chack sum(subset) == target.
//         if(n == 0 && cur.size() == k){
//             ans.push_back(cur);
//             return;
       
//         }
       
//         for(int i=start; i<=end; i++){
//             cur.push_back(i);
//             solve(i+1, end, cur, ans, k, n-i);
//             cur.pop_back();
//         }
//     }
//     vector<vector<int>> combinationSum3(int k, int n) {
//         vector<vector<int>> ans;
//         vector<int> cur = {};
//         // calculate all possile combination that sum == target.
//         solve(1, 9, cur, ans, k, n);

//         return ans;
//     }
// };