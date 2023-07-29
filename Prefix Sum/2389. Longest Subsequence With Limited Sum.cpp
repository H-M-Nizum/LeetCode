class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++){
            nums[i] += nums[i-1];
        }

        vector<int> ans;
        for(int i:queries){
            int ind = upper_bound(nums.begin(), nums.end(), i) - nums.begin();
            ans.push_back(ind);
        }
        return ans;
        
    }
};