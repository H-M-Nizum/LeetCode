class Solution {
public:
    // // ##### Recursive approce (Backtraking) ##########
    void solve(int index, vector<int> nums, vector<int> cur, vector<vector<int>> &tem){
            tem.push_back(cur);
            for(int i=index; i<nums.size(); i++){
                cur.push_back(nums[i]);
                solve(i+1, nums, cur, tem);
                cur.pop_back();
            }
        }

    vector<vector<int>> subsets(vector<int>& nums) {
        // // ##### Iterative approce ##########
        // vector<vector<int>> tem;
        // int n = nums.size();
        // tem.push_back({});
        // tem.push_back({nums[0]});
        // // n len set have a 2^n subset.
        // // initially make a empty subset and a subset in zero index in set
        // // than copy this, and add ith index value in emery subset
        // // finaly push in tem.
        // // Same process continue until last index in main arry or set.
        // // TC : O(n*2^n)
        // // SC : O(n*2^n) 
        // for(int i=1; i<n; i++){
        //     for(int j=0; j<pow(2, i); j++){
        //         vector<int> x = tem[j];
        //         x.push_back(nums[i]);
        //         tem.push_back(x);
        //     }
        // }
        // return tem;


        vector<vector<int>> tem;
        vector<int> cur = {};
        solve(0, nums, cur, tem);
        return tem;
    }
};