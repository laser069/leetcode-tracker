// Last updated: 4/21/2026, 2:50:59 PM
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
    void dfs(TreeNode* left,TreeNode*right,bool oddDepth){
        if(!left)return;
        if(oddDepth){
            int val = left->val;
            left->val = right->val; 
            right->val = val;
        }
        dfs(left->left,right->right,!oddDepth);
        dfs(left->right,right->left,!oddDepth);
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        dfs(root->left,root->right,true);
        return root;
    }
};