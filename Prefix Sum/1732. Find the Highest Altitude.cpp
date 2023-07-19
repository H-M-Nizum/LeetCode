class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_value = 0;
        int ans = 0;
        for(int c:gain){
            ans += c;
            if(ans > max_value) max_value = ans;
        }
        return max_value;
    }
};