// python.
// import sys

// input = sys.stdin.readline
// n = 'needle'
// b = 'e'
// if b in n:
//     print(n.index(b))
// else:
//     print(-1)

//c++
#include<bits/stdc++.h>
using namespace std;
int main(){
    string n = "needle";
    string b = "c";
    size_t found = n.find(b);
    if (found != string::npos)
        cout <<found << endl;
    else cout<<-1;

}