class Solution {
public:
    string reorganizeString(string s) {
        map<char, int> mp;
        for (auto c: s) mp[c]++;

        multimap<int, char, greater<int>> ml;
        for (auto i: mp)
            ml.insert({i.second, i.first});

        int n = s.size();
        int k = ml.begin()->first;
        if (2 * k - n > 1) return "";
        
        int i = 0;
        vector<string> v(k);
        for (auto p: ml) {
            for (int j = 0; j < p.first; ++j)
                v[(i++) % k].append(1, p.second);
        }

        string ans;
        for (auto s: v)
            ans += s;
        return ans;
    }
};