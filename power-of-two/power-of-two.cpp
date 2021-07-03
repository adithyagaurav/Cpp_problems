class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        return (fmod(log10(n)/log10(2), 1.0) == 0);
    }
};