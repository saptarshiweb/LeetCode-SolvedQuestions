class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        
        for(int i=1;i<n;i++)
        {
            int l=matrix[i].size()-1;
            matrix[i][0]+=min(matrix[i-1][0],matrix[i-1][1]);
            matrix[i][l]+=min(matrix[i-1][l],matrix[i-1][l-1]);
            
            for(int j=1;j<l;j++)
            {
                matrix[i][j]+=min({matrix[i-1][j],matrix[i-1][j-1],matrix[i-1][j+1]});
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<matrix[n-1].size();i++)
        {
            ans=min(ans,matrix[n-1][i]);
        }
        return ans;
        
    }
};