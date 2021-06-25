class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0, len = columnTitle.length();
        for(int i=len;i>0;i--){
            ans += ((int)columnTitle[i-1] - 64)*pow(26, abs(i-len));
        }
        return ans;
    }
};