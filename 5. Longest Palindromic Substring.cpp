class Solution {
public:
    string longestPalindrome(string s) {
        
        
        
        
    int n=s.length();
    int len=0,l,r;
    string ans;

    for(int i=0;i<n;i++)
    {
        l=i,r=i;
        while(l>=0 && r<n && (s[l]==s[r]))
        {
            if(len<(r-l+1))
            {
                len = r-l+1;
                ans=s.substr(l,len);
            }
            l--;
            r++;
        }
        l=i;r=i+1;
        while(l>=0 && r<n && (s[l]==s[r]))
        {
            if(len<(r-l+1))
            {
                len = r-l+1;
                ans=s.substr(l,len);
            }
            l--;
            r++;
        }
    }
return ans;
        
    }
};
