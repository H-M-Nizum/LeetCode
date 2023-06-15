#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string ans = "";
    while(ss >> word){
        ans = word;
    }
    cout<<ans.size();
	return 0;
}