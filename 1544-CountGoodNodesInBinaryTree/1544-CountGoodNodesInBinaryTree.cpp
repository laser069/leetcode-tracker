// Last updated: 4/21/2026, 2:51:31 PM
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
    int dfs(TreeNode* root,int maxVal){
        if(!root)return 0;
        int res = 0;
        if(root->val>=maxVal)res = 1;
        maxVal = max(root->val,maxVal);
        res+=dfs(root->left,maxVal);
        res+=dfs(root->right,maxVal);
        return res;
    }
    int goodNodes(TreeNode* root) {
        return dfs(root,root->val);
    }
};