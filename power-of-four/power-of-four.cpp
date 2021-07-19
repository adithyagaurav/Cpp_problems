/*
Solve question using mathematical properties of log function.

log(4^x) = x log(4)
*/

class Solution {
public:
    bool isPowerOfFour(int n) {
        return fmod(log(n)/log(4), 1.0)==0;
    }
};