#include<bits/stdc++.h>
using namespace std;
int main(){
    string number;
    cin>>number;
    char digit;
    cin>>digit;
    int ans = INT_MIN;
    for(int i=0; i<number.size(); i++){
        if(number[i] == digit){
            number.erase(i, 1);
            ans = max(ans, stoi(number));
            number.insert(i, 1,digit);
        }
    }
    cout<<to_string(ans)<<endl;;
}