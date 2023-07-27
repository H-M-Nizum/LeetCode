#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
  int l = str.size();
  if(l%2==1) return -1;
  else{
    int ans = 0;
    stack<char> s;
    for(char i:str){
      if(i == '{') s.push(i);
      else{
        if(s.empty()){
          s.push('{');
          ans++;
        }
        else{
          s.pop();
        }
      }
    }

    return ans + s.size()/2;
  }
}