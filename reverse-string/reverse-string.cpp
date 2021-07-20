/*
Solve using character swap

Run loop only till half the size of vector
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        int size = s.size();
        for(int i=0;i < 0.5*size;i++){
            c = s[i];
            s[i] = s[size-1-i];
            s[size-1-i] = c;
        }
    }
};