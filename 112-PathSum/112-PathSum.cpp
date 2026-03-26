// Last updated: 3/26/2026, 1:27:14 PM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool hasSum(TreeNode* root,int currentSum,int targetSum){
        if(!root)return false;
        currentSum+=root->val;
        if(!root->left && !root->right && currentSum == targetSum)return true;

        return hasSum(root->left,currentSum,targetSum) || hasSum(root->right,currentSum,targetSum);

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return hasSum(root,0,targetSum);
    }
};