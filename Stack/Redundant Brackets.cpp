#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for(char i:s){
        if(i == '(') st.push(i);
        else if(i=='+' || i=='-' || i=='*' || i=='/'){
            if(!st.empty() && st.top() == '(') st.push(i);
        }
        else if(i == ')'){
            if(st.empty()) return true;
            else{
                if(st.top() == '(') return true;
                else{
                    while(!st.empty() && st.top() != '('){
                        st.pop();
                    }
                    if(st.empty()) return true;
                    else st.pop();
                }
                // else return true;    
            }
        }

    }
    if(st.empty()) return false;
    else return true;
}
