class Solution {
public:
    
    
    void dfs(vector<vector<char>>& board,int i,int j)
    {
        if(board[i][j]=='X')
        {
            board[i][j]='.';
            if(i+1<board.size())dfs(board,i+1,j);
            if(i-1>0)dfs(board,i-1,j);
            if(j+1<board[0].size())dfs(board,i,j+1);
            if(j-1>0)dfs(board,i,j-1);
        }
    }
    
    int countBattleships(vector<vector<char>>& board)
    {
        int row=board.size();int col=board[0].size();int ans=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(board[i][j]=='X')
                {
                    ans++;
                    dfs(board,i,j);
                }
            }
        }
        
        return ans;
    }
};