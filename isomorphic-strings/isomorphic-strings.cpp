class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<int, int> isomorphic;
        vector<int> mapped;
        for(int i=0;i<s.length();i++){
            if(isomorphic.find(s[i])==isomorphic.end()){
                isomorphic[s[i]] = t[i];
                if(find(mapped.begin(), mapped.end(), t[i])!=mapped.end())
                    return false;
                else
                    mapped.push_back(t[i]);
            }
            else{
                if(isomorphic[s[i]]!=t[i])
                    return false;
            }
        }
        return true;
    }
};