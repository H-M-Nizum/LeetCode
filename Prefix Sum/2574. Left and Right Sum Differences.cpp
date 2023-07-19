class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        vector<int> suf(n);

        int sum = 0;
        for(int i=0; i<n-1; i++){
            pre[i] = sum;
            sum += nums[i];
        }
        pre[n-1] = sum;

        sum = 0;
        for(int i=n-1; i>0; i--){
            suf[i] = sum;
            sum += nums[i];
        }
        suf[0] = sum;

        nums.clear();
        for(int i=0; i<n; i++){
            nums.push_back(abs(pre[i] - suf[i]));
        }
        return nums;
        
    }
};