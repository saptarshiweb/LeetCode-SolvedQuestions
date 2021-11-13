/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    
    void pre(TreeNode* root,vector<int>& v)
    {
        if(root)
        v.push_back(root->val);
        
        if(root->left)
        pre(root->left,v);
        
        if(root->right)
        pre(root->right,v);
    }
    
    int getMinimumDifference(TreeNode* root)
    {
        vector<int> v;
        pre(root,v);
        
        sort(v.begin(),v.end());
        if(v.size()==1)
            return v[0];
        
        
        int ans=v[1]-v[0];
        
        for(int i=0;i<v.size()-1;i++)
        {
            ans=min(ans,abs(v[i+1]-v[i]));
            
            if(ans==0)
                return 0;
        }
        
        return ans;
        
        
        
    }
};