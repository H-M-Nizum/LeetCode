#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    int len_a = a.size(), len_b = b.size();
    int max_len = max(len_a, len_b);
    string la = "";
    for(int i=0; i<max_len - len_a; i++){
        la += "0";
    } 
    string lb = "";
    for(int i=0; i<max_len - len_b; i++){
        lb += "0";
    }
    la += a;
    lb += b;
    // cout<<la<<" "<<lb<<endl;
    string result = "";
    int carry = 0, ans = 0;
    for(int i=max_len-1; i>=0; i--){
        int x = int(la[i]) - 48;
        int y = int(lb[i]) - 48;
        ans = x + y + carry;
        if(ans >= 2){
            ans = ans - 2;
            carry = 1;
            result += to_string(ans);
        }
        else{
            result += to_string(ans);
            carry = 0;
        }
    }
    if(carry) result += to_string(carry);
    reverse(result.begin(), result.end());
    cout<<result<<endl;

	return 0;
}