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
    void solve(vector<int> &ans,TreeNode* root)
    {
        
        if(root&&root->left)
            solve(ans,root->left);
        if(root)
            ans.push_back(root->val);
        else
            return;
        if(root&&root->right)
            solve(ans,root->right);
        
        
    }
    
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> ans;
        solve(ans,root);
        return ans;
        
    }
};