class Solution {
public:
    string convertToTitle(int columnNumber) {
        int x;
        string output="";
        char c;
        while(columnNumber>0){
            x = columnNumber%26;
            if(x == 0){
                x = 26;
                columnNumber--;
            }
            columnNumber = columnNumber/26;
            c = 64+x;
            output = c+output;
        }
        return output;
    }
};