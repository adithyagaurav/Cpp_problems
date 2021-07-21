/*
Solved this question using two pointer techniue. But this can oly be done is both arrays are sorted first.

Solution is faster than 100% and better memory usage than 99% submissions
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int len1 = nums1.size(), len2 = nums2.size();
        
        // Sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        // Initialize two pointers
        int l=0, r=0;
        while(l<len1 && r<len2){
            // Copy the pointed values
            int left = nums1[l];
            int right = nums2[r];
            
            // If element is in both arrays, push it to output, increment both pointers until both pointers are not pointing to copied values
            if(left==right){
                v.push_back(nums1[l]);
                while(l<len1 && left == nums1[l])
                    l++;
                while(r<len2 && right==nums2[r])
                    r++;
            }
            
            // If element in left is smaller, increment left pointer until its not pointing to copied left value, and vice versa
            if(left<right)
                while(l<len1 && left == nums1[l]) l++;
            if(right<left)
                while(r<len2 && right == nums2[r]) r++;
        }
        return v;
    }
};