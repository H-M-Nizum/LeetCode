class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        // creat a keybord with number and digits.
        map<char, string> mp;
        mp['2'] = "abc"; 
        mp['3'] = "def"; 
        mp['4'] = "ghi"; 
        mp['5'] = "jkl"; 
        mp['6'] = "mno"; 
        mp['7'] = "pqrs"; 
        mp['8'] = "tuv"; 
        mp['9'] = "wxyz";


        queue<string> q; // use queue fro creak combinations.
        if(digits.size() == 0){
            return ans;
        }
        else{
            for(int i=0; i<digits.size(); i++){
                string tem = mp[digits[i]];
                if(i==0){ // if queue is empty, push single character in 1st index valus(digit # mp) in digits array.
                    for(char j:tem){
                        string cur = "";
                        cur+=j;
                        q.push(cur);
                    }
                }
                else{
                    int len_value =q.size();  // q ar protita element ak ak kore ber korbo , 
                    // ar sathr tem ar every single char add kore again q te push korbo.
                    while(len_value--){
                        if(!q.empty()){
                        
                            string cur = q.front();
                            q.pop();
                            for(char k : tem){ // akta akta kore char add kore, queue te push korbo.
                                q.push(cur + k);
                            }
                        }
                        
                    }
                }
            } 
        }
        // while(!q.empty()){
        //     cout<<q.front()<<endl;
        //     q.pop();
        // }
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }

        return ans;
    }
};