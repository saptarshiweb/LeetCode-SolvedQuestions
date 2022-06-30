class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat)
    {
        int n=mat.size();int m=mat[0].size();
        vector<vector<int>> ans(mat);
        
        for(int i=0;i<m;i++)
        {
            vector<int> tem;
            int j=i,k=0;
            while(j<m&&k<n)
            {
                tem.push_back(mat[k][j]);k++;j++;
            }
            sort(tem.begin(),tem.end());
            j=i;k=0;
            for(int l=0;l<tem.size();l++)
            {
                ans[k++][j++]=tem[l];
            }
        }
        
        for(int i=1;i<n;i++)
        {
            vector<int> tem;
            int j=i,k=0;
            while(k<m&&j<n)
            {
                tem.push_back(mat[j][k]);k++;j++;
            }
            sort(tem.begin(),tem.end());
            j=i;k=0;
            for(int l=0;l<tem.size();l++)
            {
                ans[j++][k++]=tem[l];
            }
        }
        
        return ans;
        
        
    }
};