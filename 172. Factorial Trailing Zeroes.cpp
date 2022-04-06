class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        int fiv = 5;
        while(fiv<=n)
        {
            cnt+= (n/fiv);
            fiv*=5;
        }
        return cnt;

    }
};
