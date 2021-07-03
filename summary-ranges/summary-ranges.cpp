class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        long first_num, prev, second_num, curr;
        vector<string> out;
        if(nums.size()==0)
            return {};
        first_num = nums[0];
        second_num = first_num;
        for(int i=1;i<nums.size();i++){
            prev = nums[i-1];
            curr = nums[i];
            if(curr - prev <=1){
                second_num = curr;
            }
            if(curr-prev > 1){
                if(first_num == second_num)
                    out.push_back(to_string(second_num));
                else
                    out.push_back(to_string(first_num) + "->" + to_string(second_num));
                    
                first_num = curr;
                second_num = curr;
            }
        }
        if(first_num == second_num)
            out.push_back(to_string(second_num));
        else
            out.push_back(to_string(first_num)+"->"+to_string(second_num));
        return out;
    }
};