class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = arr[0];
        int n = arr.size();
        for(int i=1; i<n; i++){
            ans += arr[i];
            arr[i] += arr[i-1];
        }
        for(int i=3; i<100; i+=2){
            for(int j=0; j<=n-i; j++){
                if(j == 0){
                    ans += arr[j+i-1];
                }
                else{
                    ans += (arr[j+i-1] - arr[j-1]);
                }
            }
        }
        return ans;
        
    }
};