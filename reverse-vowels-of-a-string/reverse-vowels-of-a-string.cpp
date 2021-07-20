/*
Solved this question using two pointers. Left pointer starts at leftmost character, vice versa for right pointer. Increment left pointer till its smaller than right. 

If both left and right are vowels, swap both, increment left & decrement right

If left is a vowel but right isnt, decrement right pointer and check again

If left is not a vowel, increment left pointer and check nex character
*/

class Solution {
public:
    
    // Helper function to check if character is vowel
    bool isVowel(char x){
        if(x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u' || x == 'A' ||
        x == 'E' || x == 'I' || x == 'O' || x == 'U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int left=0, right = s.length() - 1;
        char c;
        
        // Escape trigger is when left is not smaller than righ pointer
        while(left<right){
            
            // If both are vowels, swap both, increment left, decrement right
            if(isVowel(s[left]) && isVowel(s[right])){
                
                // Swap only if left and right are not same characters
                if(s[left]!=s[right]){
                    c = s[left];
                    s[left] = s[right];
                    s[right] = c;
                }
                left++;
                right--;
            }
            
            // If only left is a vowel, decrement right and check again
            else if(isVowel(s[left]) && !isVowel(s[right]))
                right--;
            
            // If left isnt vowel, increment left & check for next character
            else
                left++;
        }
        return s;
    }
};