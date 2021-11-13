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
    
    void preorder(TreeNode* root,map<int,int>& m)
    {
        if(root)
        m[root->val]++;
        if(root->left)
        preorder(root->left,m);
        if(root->right)
        preorder(root->right,m);
        
    }
    vector<int> findMode(TreeNode* root)
    {
        map<int,int> m;
        
        preorder(root,m);
        
        int large=0;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            large=max(large,it->second);
        }
        
        vector<int> ans;
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(it->second==large)
                ans.push_back(it->first);
        }
        
        return ans;
    }
};