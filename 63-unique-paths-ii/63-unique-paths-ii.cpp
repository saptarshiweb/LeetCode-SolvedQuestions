class Solution {
public:
    int dp[300][300];
    int path(int i,int j,int n,int m,vector<vector<int>> grid)
    {
        if(i==n&&j==m)
            return 1;
        if(i>n||j>m)
            return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        int right=0,down=0;
        if(i+1<=n&&grid[i+1][j]!=1)
            right=path(i+1,j,n,m,grid);
        if(j+1<=m&&grid[i][j+1]!=1)
            down=path(i,j+1,n,m,grid);
        
        return dp[i][j]=(right+down);
        
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid)
    {
        memset(dp,-1,sizeof(dp));
        int n=grid.size();int m=grid[0].size();
        if(grid[0][0]==1)
            return 0;
        return path(0,0,n-1,m-1,grid);
    }
};