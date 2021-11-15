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
    
    int minDiffInBST(TreeNode* root)
    {
        
        vector<int> v;
        
        pre(root,v);
        sort(v.begin(),v.end());
        
        int dif=v[1]-v[0];
        
        for(int i=1;i<v.size();i++)
        {
            dif=min(v[i]-v[i-1],dif);
            if(dif==0)
                return dif;
        }
        
        return dif;
        
        
    }
};