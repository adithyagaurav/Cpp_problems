class Solution {
public:
    int trailingZeroes(int n) {
        int out=0, i=5;
        while(i<=n){
            out+=n/i;
            i*=5;
        }
        return out;
    }
};