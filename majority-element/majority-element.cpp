class Solution {
public:
    // Solution 1: Using Hash Maps (Faster than 82.93%)
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()/2];
        map<int, int> map_nums;
        int len = nums.size();
        for(int i=0;i<len;i++){
            map_nums[nums[i]]++;
            if(map_nums[nums[i]]>len/2)
                return nums[i];
        }
        return 0;
    }
    
    // Solution 2: Math solution (Faster than 82.93%)
    // int majorityElement(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     return nums[nums.size()/2];
    // }

};