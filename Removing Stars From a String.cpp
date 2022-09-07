class Solution {
public:
    string removeStars(string s) {
        int n = s.length();
    stack<char>st;
    for (int i =0;i<n;i++)
    {
        if(s[i]=='*' && !(st.empty()))
        {
            st.pop();
        }
        else
            st.push(s[i]);

    }
    string ans = "";
    while(!st.empty())
    {
        char c = st.top();
        st.pop();
        ans+=c;
    }
     reverse(ans.begin(),ans.end());
    return ans;

    }
};
