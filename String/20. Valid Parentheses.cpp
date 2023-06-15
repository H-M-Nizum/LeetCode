#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans = "";
    int aa = 1;
    for(char c:s){
        if(c=='(' || c=='{' || c=='[') ans += c;
        else{
            if(c==')'){
                if(ans.back()=='('){
                    ans.pop_back();
                }
                else{
                    aa = 0;
                    break;
                }
            }
            else if(c=='}'){
                if(ans.back()=='{'){
                    ans.pop_back();
                }
                else{
                    aa = 0;
                    break;
                }
            }
            else if(c==']'){
                if(ans.back()=='['){
                    ans.pop_back();
                }
                else{
                    aa = 0;
                    break;
                }
            }
        } 
    }
    if(aa==1 && ans.size()==0) cout<<"YES";
    else cout<<"no";
	return 0;
}