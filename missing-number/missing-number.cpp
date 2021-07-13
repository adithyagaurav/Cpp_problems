/*
Question can be simply solved of all the numbers from 0 to length
of nums. From this sum subtract the sum of all elements of the nums vector.
The result will be the missiing number.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum1=len*(len+1)/2, sum2=0;
        for(int i = 0;i<len;i++){
            sum2 += nums[i];
        }
        return sum1 - sum2;
    }
};