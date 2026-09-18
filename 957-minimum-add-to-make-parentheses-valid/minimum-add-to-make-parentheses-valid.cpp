class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;

        for(int i = 0; i < s.size(); i++){

            // string me opening bracket h to use stack me push kr do
            if(s[i]=='('){
                st.push(s[i]);
            }

            // if string has not opening bracket then check stack is empty or not
            else{
                if(st.empty())  // if stack is empty then increase the value of count.
                count++;
                else           // if stack is not empty then removed that closing bracket which was pushed in stack 
                st.pop();
            }
        }
        return count + st.size();
    }
};