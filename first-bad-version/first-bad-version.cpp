/*
Used Binary search to solve this question. However modifications are needed to pass all test cases.

    1. Always shift the start & end pointer to middle after a check, not to middle+1 or              middle-1
    2. Since start & end pointer are never going to cross each other due to 1st condition,
       we have a potential of triggering infinite loop, hence terminating condition will
       be end-start > 1
    3. The above terminating condition will leave us with 2 possible answers start and end, 
       to get the correct bad version we need to run one more test, and find which of the          two is bad
    4. To prevent the problem of overflow, always calculate middle by the formula as given:
                "start + (end-start)/2"
*/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1, end = n;
        int middle = start + (end-start)/2;
        while(end-start > 1){
            if(isBadVersion(middle)){
                end = middle;
                middle = start + (end-start)/2;
            }
            else{
                start = middle;
                middle = start + (end-start)/2;
            }
        }
        if(isBadVersion(start))
            return start;
        else
            return end;
    }
};