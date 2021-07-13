/*
Solving the question using stack, each number from vector is popped, it is pushed to stack only if its not equal to the top of stack. Once all the elements from the vector have been popped, all the elements in stack are pushed back to the vector
*/


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> st;
        int len = nums.size(), n;
        
        // Check for corner case
        if(len==0)
            return 0;
        
        // Pop last element from the vector and push it to stack without checks
        st.push(nums[nums.size()-1]);
        nums.pop_back();
        
        // For each element popped from vector, push it to stack only if its not equal to the top
        for(int i=len-2;i>=0;i--){
            cout<<nums.size()<<" ";
            n = nums[i];
            nums.pop_back();
            if(st.top() != n){
                st.push(n);
            }
        }
        
        // All the elements have been popped and distinct elements filtered in stack. Push stack elements back to vector and return new length
        while(!st.empty()){
            n = st.top();
            st.pop();
            nums.push_back(n);
        }
        return nums.size();
    }
};