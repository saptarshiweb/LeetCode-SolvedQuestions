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
    void answer(TreeNode* root,string str,vector<string>& ans)
    {
        if((root->left==NULL)&&(root->right==NULL))
        {
            ans.push_back(str);return;
        }
        
        if(root->left)
            answer(root->left,str+"->"+to_string(root->left->val),ans);
        
         if(root->right)
            answer(root->right,str+"->"+to_string(root->right->val),ans);
        
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> ans;
        if(root==NULL)
            return ans;
        
        answer(root,to_string(root->val),ans);
        
        return ans;
        
        
        
        
    }
};