class Solution {
public:
    
    void dfs(vector<vector<int>>& board,int i,int j,int &c)
    {
        if(board[i][j]==1)
        {
            board[i][j]=0;
            c++;
            if(i+1<board.size())dfs(board,i+1,j,c);
            if(i-1>=0)dfs(board,i-1,j,c);
            if(j+1<board[0].size())dfs(board,i,j+1,c);
            if(j-1>=0)dfs(board,i,j-1,c);
        }
        else
            return;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid)
    {
        int row=grid.size();int col=grid[0].size();int ans=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int c=0;
                if(grid[i][j]==1)
                    dfs(grid,i,j,c);
                
                ans=max(ans,c);
            }
        }return ans;
        
    }
};