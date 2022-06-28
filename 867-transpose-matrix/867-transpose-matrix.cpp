class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix)
    {
        vector<vector<int>> ans;
        int n=matrix.size();int m=matrix[0].size();
        
        vector<int> tem;
        for(int i=0;i<n;i++)
            tem.push_back(-1);
        
        for(int i=0;i<m;i++)
            ans.push_back(tem);
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans[i][j]=matrix[j][i];
        
        return ans;
        
    }
};