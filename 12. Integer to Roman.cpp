class Solution {
public:
    int romanToInt(string s) {

    int n = s.length();
    long long ans =0;
    int curr =100000, prev = 0;
    for(int i = n-1;i>=0;i--)
    {
        if(s[i]=='I') curr = 1;
        else if(s[i]=='V') curr  = 5;
        else if (s[i]=='X') curr = 10;
        else if (s[i] == 'L')curr = 50;
        else if (s[i] == 'C')curr = 100;
        else if (s[i] == 'D') curr  = 500;
        else curr = 1000;
        if(curr>=prev) ans +=curr ;
        else ans -=curr;
        prev = curr;
    }
    return ans;

    }
};
