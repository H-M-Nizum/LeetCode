class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mp;
        for(char i:s){
            mp[i]++;
        }
        int n = s.size();
        for(int i=0; i<n; i++){
            if(mp[s[i]] == 1) return i;
        }
        return -1;
        
    }
};