#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    cin>>c;
 
    reverse(c.begin(), c.end());
    cout<<c;
    int ans = 0, d = 0, e = 0;
    for(int i=0; i<c.size(); i++){
        d = int(c[i]) - 64;
        // cout<<"d: "<<d<<" "<<i<<endl;
        // cout<<d*pow(26, i)<<endl;
        ans += d * pow(26, i);
        // cout<<e<<endl;
    }
    cout<<ans;
	return 0;
}