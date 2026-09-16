class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);   // agr koi ek v brakcket match krta h to st stack me push kr do 
            }
            else{
                if(st.size() == 0){     // if stack is empty then retrun false.
                    return false;
                }
                if((st.top() == '(' && s[i] == ')') ||
                   (st.top() == '[' && s[i] == ']') ||
                   (st.top() == '{' && s[i] == '}')){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st.size() == 0;
    }
};