class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,bool& flag)
    {
        if(grid[i][j]==0)
        {
            if(i==0||j==0||i==grid.size()-1||j==grid[0].size()-1)
            {
                flag=false;return;
            }
            
            grid[i][j]=1;
            if(i-1>=0)dfs(grid,i-1,j,flag);
            if(i+1<grid.size())dfs(grid,i+1,j,flag);
            if(j-1>=0)dfs(grid,i,j-1,flag);
            if(j+1<grid[0].size())dfs(grid,i,j+1,flag);
        }
    }
    
    int closedIsland(vector<vector<int>>& grid)
    {
        int row=grid.size(),col=grid[0].size();
        int ans=0;
        for(int i=1;i<row-1;i++)
        {
            for(int j=1;j<col-1;j++)
            {
                bool flag=true;
                if(grid[i][j]==0)
                {
                    dfs(grid,i,j,flag);
                    if(flag)
                        ans++;
                }
            }
        }
        return ans;
    }
};