#include <bits/stdc++.h>
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> suf(n);
  
        int sum = 0;

        for(int i=n-1; i>=0; i--){
            sum += nums[i];
            suf[i] = sum;
        }

        sum = 0;
        for(int i=0; i<n-1; i++){
            if(sum == suf[i+1]) return i;
            cout<<sum<<" "<<suf[i+1]<<endl;
            sum += nums[i];
        }
        if(sum == 0) return n-1;

        return -1;
        
    }
};