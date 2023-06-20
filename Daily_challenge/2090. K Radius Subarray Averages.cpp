#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {7,4,3,9,1,8,5,2,6};
    int k;
    cin >> k;
    int n = nums.size();
    vector<int>avgs(n, -1);
    int len = (k*2)+1;
    if(len > n){
        // return avgs;
        for(int c:avgs){
            cout<<c<<" ";
        }
        return 0;
    }

    long long sum = 0;
    for(int i=0; i<len; i++){
        sum += nums[i];
    }
    for(int i=k; i<n-k; i++){
        avgs[i] = sum / len;
        if(i<n-k-1){
            sum -= nums[i-k];
            sum += nums[k+i+1];
        }
    }
    // return avgs;
        
    for(int c:avgs){
        cout<<c<<" ";
    }

    return 0;
}



// Also used ##### prefixsum ####### for solve this problem . 

// vector<long long> prefix(n + 1);
// for (int i = 0; i < n; ++i) {
//     prefix[i+1] = prefix[i] + nums[i];
// }
// for (int i = k; i + k < n; ++i) {
//     avgs[i] = (prefix[i+k+1] - prefix[i-k]) / len;
// }

// return avgs;
    