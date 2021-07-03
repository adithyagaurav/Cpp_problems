class Solution {
public:
    int reverse(int x) {
        int ans=0, y=x;
        x= abs(x);
        while(x>0){
            if(ans>INT_MAX/10)
                return 0;
            ans = ans*10 + x%10;
            x = x/10;
        }
        if(y<0)
            ans*=-1;
        return ans;
    }
};