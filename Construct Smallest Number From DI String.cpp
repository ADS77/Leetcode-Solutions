class Solution {
public:
    string smallestNumber(string s) {


        int n = s.length();
        char c='1';
        string ans = "";
        for(int i=1; i<=n+1; i++)
        {
            ans+=c;
            c++;
        }
        cout<<ans<<endl;
        while(1)
        {
            bool chk = true;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='I')
                {
                    if(ans[i]>=ans[i+1])
                    {

                        chk = false;
                        break;
                    }

                }
                else
                {

                    if(ans[i]<=ans[i+1])
                    {
                        chk = false;
                        break;
                    }
                }
            }
            if(chk)
            {
                return ans;
                break;
            }
            else
            {
                next_permutation(ans.begin(),ans.end());
            }
        }

    }

};
