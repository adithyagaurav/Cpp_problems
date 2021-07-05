/*
This problem can be solved with optimum time complexity
using Switch Cases and covering the 3x2 corner cases

Will not be using Hash-maps because Switch Case is not
only easier to understand but also is computationally
faster
*/

class Solution {
public:
    int fetch(char s){
        /*
        Function to return the numeral value of
        each roman character
        
        Args: Roman char
        Returns: Interger value
        
        */
        switch (s){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
    int romanToInt(string s) {
        /*
        Main function
        */
        int sum = 0, elem_to_add = 0;
        
        //Iterate over each element
        for(int i=0;i<s.length();i++){
            
            //Check for 3x2 corner cases and increment iterator twice if corner case found
            //else add the number to sum without additional increment
            
            if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
                elem_to_add = fetch(s[i+1]) - fetch(s[i]);
                i = i+1;
            }
            else if(s[i]=='X' && (s[i+1]=='L'|| s[i+1]=='C')){
                elem_to_add = fetch(s[i+1]) - fetch(s[i]);
                i = i+1;                
            }
            else if(s[i]=='C' && (s[i+1]=='D'|| s[i+1]=='M')){
                elem_to_add = fetch(s[i+1]) - fetch(s[i]);
                i = i+1;                
            }
            else{
                elem_to_add = fetch(s[i]);
            }
            sum += elem_to_add;
        }
        return sum;
    }
};