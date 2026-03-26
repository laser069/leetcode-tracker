// Last updated: 3/26/2026, 1:27:19 PM
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
    bool dfs(TreeNode* left,TreeNode* right){
        if(left == nullptr && right == nullptr)
        return true;
        
        if(left == nullptr || right == nullptr)
        return false;

        return left->val==right->val && dfs(left->left,right->right) && dfs(right->left,left->right);

    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return dfs(root->left,root->right);
        
    }
};