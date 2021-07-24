/*
Initialize a zero vector of size 26 for each alphabet. Increment the index of alphabet every time it shows up in the string. Process the string again and return the index of first element with 1 as its value 
*/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.length();i++)
            v[s[i]-'a']++;
        for(int i=0;i<s.length();i++){
            if(v[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};