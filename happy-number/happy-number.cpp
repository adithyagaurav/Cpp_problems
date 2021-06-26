class Solution {
public:
    bool isHappy(int n) {
        int ans=0,sum=0, x=n, rem;
        if(n==1 || n==7)
            return true;
        if(n<10)
            return false;
        while(sum!=1){
            sum = 0;
            while(x>0){
                rem = x%10;
                sum += rem*rem;
                x = x/10;
            }
            x = sum;
            cout<<sum<<" ";
            if(sum<10){
                if(sum==1 || sum==7)
                    return true;
                else
                    return false;
            }
        }
        return false;
    }
};