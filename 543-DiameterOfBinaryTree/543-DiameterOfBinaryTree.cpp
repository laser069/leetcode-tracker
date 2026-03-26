// Last updated: 3/26/2026, 1:26:30 PM
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
    int depth(TreeNode* root,int& maxdia){
        if(root == nullptr)return 0;
        int right = depth(root->left,maxdia);
        int left = depth(root->right,maxdia);
        maxdia = max(maxdia,left+right);
        return 1+max(left,right);
    } 
    int diameterOfBinaryTree(TreeNode* root) {
        int maxdia = 0;
        depth(root,maxdia);
        return maxdia;
        
    }
};