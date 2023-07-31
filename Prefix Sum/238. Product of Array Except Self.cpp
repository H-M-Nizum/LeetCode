class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        int sum = 1;
        for(int i=0; i<n; i++){
            sum *= nums[i];
            pre[i] = sum;
        }
        sum = 1;
        for(int i=n-1; i>=0; i--){
            sum *= nums[i];
            suf[i] = sum;
        }
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(i==0){
                ans.push_back(suf[1]);
            }
            else if(i == n-1){
                ans.push_back(pre[i-1]);
            }
            else{
                ans.push_back(suf[i+1] * pre[i-1]);
            }
        }
        return ans;
        
    }
};