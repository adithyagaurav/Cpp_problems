/*
Create 2 vectors, one for storing the input array, second for storing the sum of all the previous elements upto that indexed element in nums array.

Sum of the given range is difference between right index of sums array and left-1 index of sum array

Submission is faster than 99.92% of solutions
*/
class NumArray {
public:
    vector<int> v, sums;
    NumArray(vector<int>& nums) {
        int sum = 0;
        v = nums;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            sums.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return sums[right];
        else
            return sums[right] - sums[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */