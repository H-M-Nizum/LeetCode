#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {0,1,2,4,5,7};
    vector<string> ans;
        
        int n = nums.size();
        if(n == 0 ) return ans; 
        int x = nums[0];
        
        for(int i = 0; i<n; i++){
            if( i == n-1 || nums[i]+1 != nums[i+1]){
                if(nums[i] != x)
                    ans.push_back(to_string(x)+ "->"+ to_string(nums[i]));
					
                else ans.push_back(to_string(x));
			
                if(i != n-1) x = nums[i+1];
            }
        }
        return ans;
    return 0;
}