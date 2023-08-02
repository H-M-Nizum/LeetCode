class Solution {
public:
    void parentheses(string cur, vector<string> &ans, int n, int l, int r) {
        if(cur.size() == n*2){
            ans.push_back(cur);
            return;
        }


        if(l<n)  parentheses(cur + "(", ans, n, l+1, r);
        if(l>r)  parentheses(cur + ")", ans, n, l, r+1);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string cur = "(";
        parentheses(cur, ans, n, 1, 0);
        return ans;
        
    }
};