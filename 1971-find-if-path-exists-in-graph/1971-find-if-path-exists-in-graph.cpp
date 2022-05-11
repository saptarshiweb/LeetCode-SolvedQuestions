class Solution {
public:
    
    bool dfs(vector<int> adj[],vector<bool>& vis,int node,int des)
    {
        if(node==des)
            return true;
        if(vis[node])
            return false;
        vis[node]=true;
        
        for(auto it: adj[node])
        {
            
            if(dfs(adj,vis,it,des))
                return true;
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination)
    {
        
        if(source==destination)
            return true;
        
        vector<int> adj[n+1];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> vis(n+1,false);
        
        return dfs(adj,vis,source,destination);
        
    }
};