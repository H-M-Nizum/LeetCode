// python
// result = ""
// strs = sorted(strs)
// f = strs[0]
// l = strs[-1]
// for i in range(min(len(f),len(l))):
//     if f[i] != l[i]:
//         return result
//     result += f[i]
// return result 


// c++
        // string result = "";
        // sort(strs.begin(), strs.end());
        // int n = strs.size();
        // string f = strs[0], l = strs[n-1];
        // for(int i=0; i<min(f.size(), l.size());i++){
        //     if(f[i] != l[i]){
        //         return result;
        //     }
        //     result += f[i];
        // }
        // return result;

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    string result = "";
    sort(v.begin(), v.end());
    string f = v[0], l = v[n-1];
    for(int i=0; i<min(f.size(), l.size());i++){
        if(f[i] != l[i]) break;
        result += f[i];
    }
    cout<<result<<endl;

	return 0;
}


