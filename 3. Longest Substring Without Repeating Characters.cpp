class Solution {
public:
    int lengthOfLongestSubstring(string s) {

    int n=s.length();
    long long  l=0,t=0, cnt=0;
    for(int i=0;i<n;i++)
    {
        int A[256]={0};
        for(int j=i;j<n;j++)
        {
            if(A[s[j]]==0)
            {
                A[s[j]]=1;
                cnt++;
            }
            else
                break;
        }
        l=max(l,cnt);
        cnt=0;
    }
    return l;

    }
};
