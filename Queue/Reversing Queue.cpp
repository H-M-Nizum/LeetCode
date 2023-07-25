#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
    // Write your code here.
    stack<int> ans;
    while(!q.empty()){
        ans.push(q.front());
        q.pop();
    }

    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }
    cout<<endl;
}