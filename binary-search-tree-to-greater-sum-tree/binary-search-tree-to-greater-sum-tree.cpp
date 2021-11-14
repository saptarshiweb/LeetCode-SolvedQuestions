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
    
    void change(TreeNode*& root,unordered_map<int,int> m)
    {
        if(root)
        {
            root->val=m[root->val];
        }
        
         if(root->left)
            change(root->left,m);
        
        if(root->right)
            change(root->right,m);
    }
    
    TreeNode* bstToGst(TreeNode* root)
    {
        unordered_map<int,int> m;
        vector<int> v;
        pre(root,v);
        
        sort(v.begin(),v.end());
        
        
        
        int n=v.size();
        
        int sum=v[n-1];
        m[v[n-1]]=v[n-1];
        
        for(int i=n-1;i>=1;i--)
        {
            m[v[i-1]]=sum+v[i-1];
            sum+=v[i-1];
            
            
        }
        
        change(root,m);
        
        return root;
        
        
        
        
        
    }
};