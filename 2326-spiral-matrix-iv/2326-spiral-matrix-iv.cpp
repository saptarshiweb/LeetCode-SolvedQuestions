/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head){
        vector<vector<int>> ans(m,vector<int> (n,-1));
        
        int i=0,j=0;
        
        ListNode* tem=head;
        int ind=0;
        while(tem)
        {
            ans[i][j]=tem->val;
            tem=tem->next;
            
            if(ind==0)
            {
                if(j+1<n && ans[i][j+1]==-1)
                {
                    j++;continue;
                }
                ind++;
            }
            
            if(ind==1)
            {
                if(i+1<m && ans[i+1][j]==-1)
                {
                    i++;continue;
                }
                ind++;
            }
            if(ind==2)
            {
                if(j-1>=0 && ans[i][j-1]==-1)
                {
                    j--;continue;
                }
                ind++;
            }
            if(ind==3)
            {
                if(i-1>=0 && ans[i-1][j]==-1)
                {
                    i--;continue;
                }
                ind=0;j++;
            }
            
            
        }
        return ans;
        
    }
};