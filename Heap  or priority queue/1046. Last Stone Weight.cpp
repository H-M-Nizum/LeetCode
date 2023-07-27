class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(int i:stones){
            p.push(i);
        }
        int x = 0;
        int ans = 0;
        while(!p.empty()){
            int y = p.top();
            p.pop();
            if(!p.empty()){
                
                int z = p.top();
                p.pop();
                if(y == z){  
                    ans = 0;
                }
                else{
                    p.push(y-z);
                    ans = p.top();
                }
            }
            else{
                ans = y;
            }
        }
        return ans;
    }
};