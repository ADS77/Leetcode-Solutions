class Solution {
public:
     int dp[51][51][51];
int mod = (1e9+7);
    long long find_path(int m, int n, int mx_move,int row,int col)
{
    if(row<0 || row>=m || col<0 || col>=n)
        return 1;
    if(mx_move<=0)
        return 0;
    if(dp[row][col][mx_move]!=-1)
        return dp[row][col][mx_move]%mod;
    else
    {
        long long tmp = (find_path(m,n,mx_move-1,row+1,col)%mod + find_path(m,n,mx_move-1,row-1,col)%mod + find_path(m,n,mx_move-1,row,col+1)%mod + find_path(m,n,mx_move-1,row,col-1)%mod)%mod;
        return dp[row][col][mx_move] = tmp;
    }
}
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
            memset(dp,-1,sizeof(dp));
    long long ans = find_path(m,n,maxMove,startRow,startColumn);
        return ans;
    }




};
