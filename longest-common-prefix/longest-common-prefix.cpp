/*
This question has been solved by simply finding the longest
substring in the first element which is present in every other
element. The loop breaks as soon as match is not found in any of the strings
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "", str="";
        bool flag = true;
        
        // Keep incrementing the string from 1st element until matching breaks
        for(int i=0;i<strs[0].length();i++){
            str+=strs[0][i];
            
            // Search for string in other elements, break if match not found or not zero indexed, return the accumulated string
            for(int j=1; j<strs.size();j++){
                if((strs[j].find(str) == string::npos) || (strs[j].find(str)>0)){
                    flag = false;
                    break;
                }
            }
            if(flag)
                lcp = str;
            else
                break;
            
        }
        return lcp;
    }
};