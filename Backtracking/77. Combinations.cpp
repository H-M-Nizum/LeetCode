class Solution {
public:
    // // ##### Recursive approce (Backtraking) ##########
    // void solve(int index, vector<int> nums, vector<int> cur, vector<vector<int>> &tem, int k){
    //     if(cur.size()==k){
    //         tem.push_back(cur);
    //     }
       
    //     for(int i=index; i<nums.size(); i++){
    //         cur.push_back(nums[i]);
    //         solve(i+1, nums, cur, tem, k);
    //         cur.pop_back();
    //     }
    // }
    vector<vector<int>> combine(int n, int k) {
        // vector<int> nums;
        // for(int i=1; i<=n; i++){
        //     nums.push_back(i);
        // }
        // vector<vector<int>> tem;
        // vector<int> cur = {};
        // solve(0, nums, cur, tem, k);
        // return tem;
        
        // ##### Iterative approce ##########
        vector<vector<int>> tem;
        tem.push_back({});
        tem.push_back({1});
        for(int i=2; i<=n; i++){
            for(int j=0; j<pow(2, (i-1)); j++){
                vector<int> x = tem[j];
                x.push_back(i);
                tem.push_back(x);
            }
        }
        vector<vector<int>> ans;
        for(vector<int> i:tem){
            if(i.size() == k){
                ans.push_back(i);
            }
        }
       
        return ans;
        
    }
};