class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        int ans=0, y=x;
        while(x>0){
            if(ans>INT_MAX/10)
                return false;
            ans = ans*10+x%10;
            x = x/10;
        }
        return ans == y;
    }
};