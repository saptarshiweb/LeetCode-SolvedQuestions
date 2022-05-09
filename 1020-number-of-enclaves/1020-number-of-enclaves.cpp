class Solution {
public:
    
    void dfs(vector<vector<int>>& grid,int i,int j,bool& flag,int& count)
    {
        if(grid[i][j]==1)
        {
            if(i==0||j==0||i==grid.size()-1||j==grid[0].size()-1)
            {
                flag=false;return;
            }
            count++;
            grid[i][j]=0;
            if(i-1>=0)dfs(grid,i-1,j,flag,count);
            if(i+1<grid.size())dfs(grid,i+1,j,flag,count);
            if(j-1>=0)dfs(grid,i,j-1,flag,count);
            if(j+1<grid[0].size())dfs(grid,i,j+1,flag,count);
        }
    }
    
    int numEnclaves(vector<vector<int>>& grid)
    {
        int row=grid.size(),col=grid[0].size();
        int ans=0;
        for(int i=1;i<row-1;i++)
        {
            for(int j=1;j<col-1;j++)
            {
                bool flag=true;int count=0;
                if(grid[i][j]==1)
                {
                    dfs(grid,i,j,flag,count);
                    if(flag)
                        ans+=count;
                }
            }
        }
        return ans;
        
        
    }
};