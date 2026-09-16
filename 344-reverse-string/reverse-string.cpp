class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int> st; // form a stack.
        
        // push all character into a stack.
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }

        // Now pop operation perform 
        for(int i=0;i<s.size();i++){
            s[i]=st.top();  // top character ko reverse string array me push krte jao in reverse order
            st.pop();       // top ko decrease krte jao
        }
    }
};