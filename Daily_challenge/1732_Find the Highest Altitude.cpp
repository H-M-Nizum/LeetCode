#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> gain = {-5,1,5,0,-7};
    int max_value = 0;
    int ans = 0;
    for(int c:gain){
        ans += c;
        if(ans > max_value) max_value = ans;
    }
    cout<<max_value<<endl;
    return 0;
}