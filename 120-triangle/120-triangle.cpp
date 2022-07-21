class Solution {
public:
    int minimumTotal(vector<vector<int>>& t)
    {
        int n=t.size();
        
        
        for(int i=1;i<n;i++)
        {
            int j=1,k=0;
            int l=t[i].size()-1;
            
            t[i][0]+=t[i-1][0];
            
            t[i][l]+=t[i-1][t[i-1].size()-1];
            
            while(j<l)
            {
                t[i][j]+=min(t[i-1][k],t[i-1][k+1]);j++;k++;
            }
            
        }
        int ans=INT_MAX;
        for(int i=0;i<t[n-1].size();i++)
        {
            ans=min(t[n-1][i],ans);
        }
        return ans;
        
    }
};