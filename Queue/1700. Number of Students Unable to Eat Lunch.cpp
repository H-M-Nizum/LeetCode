class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stu;
        queue<int>sand;
        for(int i:students){
            stu.push(i);
        }
        for(int i:sandwiches){
            sand.push(i);
        }

        int c = 0;
        while(!stu.empty() && c < stu.size()){
            if(stu.front() == sand.front()){
                stu.pop();
                sand.pop();
                c = 0;
            }
            else{
                int x = stu.front();
                stu.pop();
                stu.push(x);
                c++;
            }
        }
        return stu.size();
        
    }
};