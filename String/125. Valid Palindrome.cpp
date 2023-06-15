#include <bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    getline(cin, c);
 
    string s = "";
    for(char i:c){
        int v = int(i);
        if(v>=48 && v<=57) s += i;
        else if(v>=65 && v<=90) s+=(i + 32);
        else if(v>=97 && v<=122) s+=i;
    }
    cout<<s<<endl;
	return 0;
}