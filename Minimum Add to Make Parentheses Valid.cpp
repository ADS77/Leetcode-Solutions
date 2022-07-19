class Solution {
public:
    int minAddToMakeValid(string s) {
         int n = s.length();
    stack<char>st;
    int tmp = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push(s[i]);
        }
        if(st.empty())
        {
            continue;
        }
        if(s[i]==')')
        {
            char ck = st.top();
            if(ck == '(')
            {
                st.pop();
                tmp+=2;
            }
        }

    }
    return(n-tmp);
    }

};
