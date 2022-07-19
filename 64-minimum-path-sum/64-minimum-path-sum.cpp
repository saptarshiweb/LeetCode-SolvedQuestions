class Solution {
public:
    int dp[400][400];
    int getMinPath(vector <vector <int>> &grid, int i, int j) {
        if (i == 0 && j == 0) {
            return grid[i][j];
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        
        int m = INT_MAX;
        if (j > 0) {
            m = grid[i][j] + getMinPath(grid, i, j - 1);
        }
        if (i > 0) {
            int s = grid[i][j] + getMinPath(grid, i - 1, j);
            m = min(m, s);
        }
        
        dp[i][j] = m;
        return dp[i][j];
    }
    
    int minPathSum(vector<vector<int>>& grid)
    {
        memset(dp,-1,sizeof(dp));
        
        return getMinPath(grid,grid.size()-1,grid[0].size()-1);
      
    }
};