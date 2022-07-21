class Solution {
public:
    long long fib(int n)
    {
        long long tmp = 0;
        long long a=0,b=1;
        if(n==0)return a;
        else
        {
            for(int i=1;i<=n;i++)
            {
                tmp = a+b;
                a=b;
                b=tmp;
            }
            return tmp;
        }
    }
    int climbStairs(int n) {
        int ans = fib(n);
        return ans;
    }
};
