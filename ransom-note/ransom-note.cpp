/*
Solve using hash maps. Register all the elements of magazine first, then decrement the registered value of each element in ransomNote. Return false as soon as an element with registration as zero is found
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mb;
        
        // Register all values in a hash map
        for(int i=0;i<magazine.length();i++){
            mb[magazine[i]]++;
        }
        
        // For each value of ransome note check if registered value is zero ad return false, else decrement it
        for(int i=0;i<ransomNote.length();i++){
            if(mb[ransomNote[i]]==0)
                return false;
            else
                mb[ransomNote[i]]--;
        }
        
        // If all element in ransomNote fill in, return true
        return true;
    }
};