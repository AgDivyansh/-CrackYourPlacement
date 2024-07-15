class Solution {
public:
    bool isValid(string s) {
        // if the size of the string is odd then it is not possible  
        if (s.size() & 1)
        {
            return false ;
        }
        stack<char> st ;
        for (int i = 0 ; i < s.size() ; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]) ;
            }
            else if (st.size() && s[i] == ')' && st.top() == '(')
            {
                st.pop() ;
            }
            else if (st.size() && s[i] == '}' && st.top() == '{')
            {
                st.pop() ;
            } 
            else if (st.size() && s[i] == ']' && st.top() == '[')
            {
                st.pop() ;
            }
            else 
            {
                return false ;
            }
        }
        return !(st.size()) ;
    }
};