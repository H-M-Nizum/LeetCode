class Solution {
public:
    void solve(int index, vector<int> nums, vector<int> cur, vector<vector<int>> &tem, int target){
            if(target == 0){
                tem.push_back(cur);
            }
            if(target < 0){
                return;
            }
            for(int i=index; i<nums.size(); i++){
                cur.push_back(nums[i]);
                solve(i, nums, cur, tem, target - nums[i]);
                cur.pop_back();
            }
        }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> tem;
        vector<int> cur = {};
        solve(0, candidates, cur, tem, target);
        return tem;
    }
};