class Solution {
public:
    
    int dp[200][200];
    int path(int i,int j,int n,int m)
    {
        if(i==n&&j==m)
            return 1;
        if(i>n||j>m)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        return dp[i][j]=(path(i+1,j,n,m)+path(i,j+1,n,m));
    }
    
    int uniquePaths(int m, int n)
    {
        memset(dp,-1,sizeof(dp));
        return path(0,0,n-1,m-1);
    }
};