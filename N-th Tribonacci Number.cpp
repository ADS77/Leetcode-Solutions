class Solution {
public:
    long long solve (int n)
    {
        long long tmp = 0;
        long long a=0,b=1,c=1;
        if(n<1)return 0;
        else if (n==1)return 1;
        else if(n==2) return 1;
        else
        {
            for(int i=3;i<=n;i++)
            {
                tmp = a+b+c;
                a=b;
                b=c;
                c=tmp;
            }
            return tmp;
        }
    }
    int tribonacci(int n) {
        int ans = solve(n);
        return ans;

    }
};
