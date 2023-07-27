class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> p;
        priority_queue<int, vector<int>, greater<int>> p1;
        for(int i:nums){
            p.push(i);
        }
        int ans = 0;
        while(true){
            while(!p.empty()){
                if(p.top() == 0){
                    p.pop();
                }
                else{
                    int tem = p.top();
                    while(!p.empty()){
                        p1.push(p.top() - tem);
                        p.pop();
                    }
                    while(!p1.empty()){
                        p.push(p1.top());
                        p1.pop();
                    }
                    ans++;
                }
                
            }
            if(p.empty()){
                break;
            }
            

        }
        return ans;
        
    }
};