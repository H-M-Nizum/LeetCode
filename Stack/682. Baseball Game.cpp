class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int len = operations.size();
        for(int i=0; i<len; i++){
            if(operations[i] == "C"){
                if(!s.empty()){
                    s.pop();
                }
            }
            else if(operations[i] == "D"){
                 if(!s.empty()){
                    s.push(2 * s.top());
                }
            }
            else if(operations[i] == "+"){
                int f = 0, l = 0;
                if(!s.empty()){
                    f = s.top();
                    s.pop();
                }
                if(!s.empty()){
                    l = s.top();
                    
                }
                if(f) s.push(f);
                s.push(f + l);
            }
            else{
                s.push(stoi(operations[i]));
            }

        }
        int sum = 0;
        while(!s.empty()){
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};