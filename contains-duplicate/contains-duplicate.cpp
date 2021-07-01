class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Solution 1: Using Hash maps
        // map<int, int> duplicate;
        int len = nums.size();
        // for(int i=0;i<len;i++){
        //     duplicate[nums[i]]++;
        //     if(duplicate[nums[i]]>1)
        //         return true;    
        // }
        // return false;
        
        //Solution 2 : Using sorting
        sort(nums.begin(), nums.end());
        for(int i=1;i<len;i++){
            if(nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};