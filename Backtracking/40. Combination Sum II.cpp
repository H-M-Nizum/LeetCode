class Solution {
public:

    // // ##### Recursive approce (Backtraking) ##########
    void solve(int index, vector<int> nums, vector<int> cur, vector<vector<int>> &tem, int target){
            if(target == 0){
                tem.push_back(cur);
            }
            if(target < 0){
                return;
            }
            for(int i=index; i<nums.size(); i++){
                if(i > index && nums[i-1] == nums[i]){
                    continue;
                }
                cur.push_back(nums[i]);
                solve(i+1, nums, cur, tem, target - nums[i]);
                cur.pop_back();
            }
        }

        

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());
        vector<vector<int>> tem;
        vector<int> cur = {};
        solve(0, candidates, cur, tem, target);
        return tem;
    }
};