class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char i:s){
            if(st.empty()) st.push(i);
            else{
                if(i >= 'a' && i <= 'z'){
                    if(i-32 == st.top()) st.pop();
                    else st.push(i);
                }
                else{
                    if(i+32 == st.top()) st.pop();
                    else st.push(i);
                }
            }
        }
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};