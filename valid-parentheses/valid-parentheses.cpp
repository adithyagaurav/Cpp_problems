/*
Solving this question using stacks. Push all the opening brackets
in the stack, and pop every time a closing bracket is encountered.
If popped element isn't the pair bracket, return false immediately

Return true only when entire string is processed successfully and stack is empty 
upon termination of for loop
*/

class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        char c;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else{
                if(!st.empty()){
                    c = st.top();
                    st.pop();
                    if(s[i]==')' && c!='(')
                        return false;
                    else if(s[i]=='}' && c!='{')
                        return false;
                    else if(s[i]==']' && c!='[')
                        return false;
                }
                else
                    return false;
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};