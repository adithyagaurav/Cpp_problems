/*
Solved this question using two pointer techniue. But this can oly be done is both arrays are sorted first.

Solution is faster than 100% and better memory usage than 99% submissions
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        // Initialize two pointers
        int l=0,r=0, lenl = nums1.size(), lenr = nums2.size();
        vector<int> v;
        
        // Sort both arrays
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        // Iterate both pointers
        while(l<lenl && r<lenr){
            
            // Add the element present in both vectors
            if(nums1[l] == nums2[r]){
                v.push_back(nums1[l]);
                l++;
                r++;
            }
            
            // If pointed element in nums1 is smaller, increment nums1 poniter, and vice versa
            else if(nums1[l] < nums2[r])
                l++;
            else
                r++;
        }
        return v;
    }
};