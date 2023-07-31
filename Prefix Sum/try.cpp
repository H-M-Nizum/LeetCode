#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3};
    int x = 3;
    cout<<upper_bound(v.begin(), v.end(), x) - v.begin();

    
}