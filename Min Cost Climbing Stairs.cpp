class Solution {
public:
    int minCostClimbingStairs(vector<int>& A) {
        int n = A.size();
    int cost =0;
    int a= A[0];
    int b=A[1];

        if(n<2)
        {
            return  (min(A[0],A[1]));
        }
    for(int i=2;i<n;i++)
    {

            cost = A[i]+min(a,b);
            a=b;
            b=cost;

    }
    return min(a,b);

    }
};
