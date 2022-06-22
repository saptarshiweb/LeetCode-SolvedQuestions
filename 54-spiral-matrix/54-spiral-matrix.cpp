class Solution {
public:
vector<int> spiralOrder(vector<vector<int>>& matrix) 
{   
    int r = matrix.size();
    int c = matrix[0].size();
    int i ; // for traversal
	int rowindex = 0, colindex = 0; // starting positions of row and colom
    vector<int> ans; // to store the values
    
    while(rowindex<r and colindex<c)
    { 
        //left to right traversal
        for(i=colindex;i<c;i++)
        {
            ans.push_back(matrix[rowindex][i]);
        }
        
        rowindex++; // first row printed
        
        //top to bottom traversal
        for(i=rowindex;i<r;i++)
        {
            ans.push_back(matrix[i][c-1]);
        }
        
        c--; // last column printed
        
        //right to left traversal
        if(rowindex<r)
        {
            for(i = c-1; i>=colindex; i--)
            {
                ans.push_back(matrix[r-1][i]);
            }
            
            r--; // last row printed
        }
         
        //bottom to top traversal
        if(colindex<c)
        {
           for(i = r-1; i >= rowindex; i--)
           {
                ans.push_back(matrix[i][colindex]);
           }
           
           colindex++; // first column printed
        }
        
    }//end of while loop
    
     return ans;
    }
};