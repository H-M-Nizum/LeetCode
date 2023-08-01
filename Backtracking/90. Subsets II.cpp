class Solution {
public:
    void solve(int index, vector<int> nums, vector<int> cur, vector<vector<int>> &tem){
        tem.push_back(cur);
        for(int i=index; i<nums.size(); i++){
            // remove duplicate value.
            if(i > index && nums[i-1] == nums[i]){
                continue;
            }
            cur.push_back(nums[i]);
            solve(i+1, nums, cur, tem);
            cur.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> tem;
        vector<int> cur = {};
        solve(0, nums, cur, tem);


        return tem;
    }
};




// class Solution {
// public:
//     void solve(int index, vector<int> nums, vector<int> cur, vector<vector<int>> &tem){
//         tem.push_back(cur);
//         for(int i=index; i<nums.size(); i++){
//             cur.push_back(nums[i]);
//             solve(i+1, nums, cur, tem);
//             cur.pop_back();
//         }
//     }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> tem;
//         vector<int> cur = {};
//         solve(0, nums, cur, tem);
//         // remove duplocate value
//         sort(tem.begin(), tem.end());
//         vector<vector<int>> ans;
//         ans.push_back(tem[0]);
//         int n = tem.size();
//         for(int i=1; i<n; i++){
//             if(ans[ans.size()-1] != tem[i]){
//                 ans.push_back(tem[i]);
//             }
//         }

//         return ans;
//     }
// };