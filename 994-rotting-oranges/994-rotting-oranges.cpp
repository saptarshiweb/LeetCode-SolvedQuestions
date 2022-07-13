class Solution
{
public:
    int orangesRotting(vector<vector<int>> &grid)
    {
        if (grid.empty())
            return 0;

        int countFreshOranges = 0;
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int, int>> q;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                    countFreshOranges++;
                else if (grid[i][j] == 2)
                    q.push({i, j});
            }
        }

        int time = 0;

        while (countFreshOranges != 0 && !q.empty())
        {
            int qsize = q.size();

            for (int i = 0; i < qsize; i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                if(x-1>=0 && x-1<m && y>=0 && y<n && grid[x-1][y]==1)
                {
                    grid[x-1][y] = 2;countFreshOranges--;q.push({x-1, y});
                }
                
                if(x+1>=0 && x+1<m && y>=0 && y<n && grid[x+1][y]==1)
                {
                    grid[x+1][y] = 2;countFreshOranges--;q.push({x+1, y});
                }
                
                if(x>=0 && x<m && y-1>=0 && y-1<n && grid[x][y-1]==1)
                {
                    grid[x][y-1] = 2;countFreshOranges--;q.push({x, y-1});
                }
                
                if(x>=0 && x<m && y+1>=0 && y+1<n && grid[x][y+1]==1)
                {
                    grid[x][y+1] = 2;countFreshOranges--;q.push({x, y+1});
                }
            }
            time++;
        }
        return countFreshOranges == 0 ? time : -1;
    }
};