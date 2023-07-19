void reverseStack(stack<int> &s){
    // Write your code here
    if (s.empty())
        return;
    int x = s.top();
    s.pop();
    reverseStack(s);
    stack<int> tam;
    while (!s.empty()){
        tam.push(s.top());
        s.pop();
    }
    tam.push(x);
    while (!tam.empty()){
        s.push(tam.top());
        tam.pop();
    }
}
