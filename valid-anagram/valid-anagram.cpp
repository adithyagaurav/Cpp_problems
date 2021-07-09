/*
This question can be solved in two ways apparently, although
the method of solving it using an array of 26 seems faster,
it will not be an optimum solution if the entities in alphabet
system becomes too large to handle. Using Hash tables would be more
optimum in that case
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> m, n;
        
        // Pull the plug right awayif lengths of two strings are different
        if(s.length()!=t.length())
            return false;
        
        //Construct the hash map for one of the strings
        for(int i=0; i<s.length();i++){
            m[s[i]] += 1;
        }
        
        // Construct the hash map for other string and verify that occurence
        // of each character encountered is lower than its occurence in first map
        for(int j=0; j<t.length();j++){
            n[t[j]]+=1;
            if(n[t[j]]>m[t[j]])
                return false;
        }
        return true;
    }
    
};