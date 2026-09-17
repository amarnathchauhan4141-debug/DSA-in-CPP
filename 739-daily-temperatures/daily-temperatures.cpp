class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
          stack<int> st;
        vector<int> ans(temperatures.size());
        for(int i = temperatures.size()-1; i >= 0; i--){
            while(st.size() > 0 && temperatures[i] >= temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()){
                ans[i] = 0;
            }
            else{
                ans[i] = st.top() - i;   //subtract index no. and store that in an array as no.of days which is warmer day
            }
            st.push(i);   // we will be push index  no. into the stack
        }
        return ans;
    }
};