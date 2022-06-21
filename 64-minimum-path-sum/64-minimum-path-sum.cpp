class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int rows=grid.size();
        int columns=grid[0].size();
        int dp[rows][columns];
        int i=1,j=1;
        dp[0][0]=grid[0][0];
        while(i<rows)
        {
            dp[i][0]=grid[i][0]+dp[i-1][0];
            i++;
        }
        while(j<columns)
        {
            dp[0][j]=grid[0][j]+dp[0][j-1];
            j++;
        }
        for(int i=1;i<rows;i++)
        {
            for(int j=1;j<columns;j++)
            {
                dp[i][j]=grid[i][j]+ min(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[rows-1][columns-1];
    }
};