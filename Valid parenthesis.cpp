//leetcode questions

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(s.empty())
        {
            return true;
        }
        
        if(n%2 != 0)
        {
            return false;
        }
        stack<char>st;
        
        for(int i=0;i<n;i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else if(!st.empty())
            {
                char c = st.top();
                if((c == '(' && s[i] == ')') || (c == '{' && s[i] == '}') || (c == '[' && s[i] == ']'))
                {
                    st.pop();
                }
            }else{
                return false;
            }
        }
        
        if(st.empty())
        {
            return true;
        }else{
            return false;
        }
    }
};
