class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        int n = strs.size();
    string s,str;
    int tmp = 2000;
    for(int i=0; i<n; i++)
    {
        int len  = strs[i].length();
        if(len<tmp) str = strs[i];
        tmp = len;

    }
    string ans;
    tmp = str.length();
    bool chk = true;
    for(int i=0; i<tmp; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[i]!=strs[j][i])
                chk = false ;
        }
        if(chk) ans +=str[i];
    }
    return ans;

    }
};
