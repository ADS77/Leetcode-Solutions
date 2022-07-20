
class Solution {
public:
    int minSwaps(string s) {
        int n = s.length();
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='[')
                st.push(s[i]);
            if(st.empty())continue;
            else if (s[i]==']')
            {
                char c = st.top();
                if(c=='[')
                {
                    st.pop();
                }
            }
        }
        int siz = st.size();
        int ans = ceil(siz/2.0);
        return ans;
    }
};
