class Solution {
public:
    
    void dfs(int node,vector<int> grid[],vector<bool>& vis)
    {
        if(!vis[node])
        {
            vis[node]=true;
            
            for(auto it:grid[node])
            {
                if(!vis[it])
                    dfs(it,grid,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected)
    {
        int row=isConnected.size();
        int ans=0;
        
        vector<bool> vis(row,false);
        
        vector<int> adj[row];
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<row;j++)
            {
                if(i!=j&&isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=0;i<row;i++)
        {
           if(!vis[i])
           {
               ans++;
               dfs(i,adj,vis);
           }
        }
        return ans;
        
    }
};