class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s = "";
        while(columnNumber){
            int num = ((columnNumber-1)%26) + 65;
            s = (char)num + s;
            columnNumber = (columnNumber-1)/26;
        
        }
        return s;
    }
};