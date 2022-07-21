class Solution {
public:
     long long fibb(int n)
{
    long long a=0,b=1;
    if(n<1)return a;
    else if(n==1)return b;
    else
    {
        long long ans=0;
        for(int i=2;i<=n;i++)
        {
            ans = a+b;
            a=b;
            b=ans;
        }
        return ans ;

    }

}
    int fib(int n) {

        return fibb(n);
    }
};
