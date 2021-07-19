/*
Solve this question uingg a function that counts bits a n is successively divided by 2

Solution is faster than 100% submissions
*/
class Solution {
public:
    int count_bits(int n){
        int count = 0;
        
        // Divide n by 2 and add the remainder to count since we're dividing by 2, remainder will either be 0 or 1
        while(n>0){
            count += n%2;
            n = n/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
        
        // Count bits for each number upto n
        for(int i=1;i<=n;i++){
            v.push_back(count_bits(i));
        }
        return v;
    }
};