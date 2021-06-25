class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            map[nums[i]] = i;
        }
        for(int j=0;j<nums.size();j++){
            if((map.find(target-nums[j]) != map.end()) && j!=map[target-nums[j]]){
                output.push_back(j);
                output.push_back(map[target-nums[j]]);
                break;
            }
        }
        return output;
    }
};