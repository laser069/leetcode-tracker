// Last updated: 4/24/2026, 4:34:51 PM
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
    int sums = 0;
    void dfs(TreeNode* root,int targetSum,long long ans){
        if(!root)return;
        ans +=root->val;
        if(ans==targetSum)sums++;
        dfs(root->left,targetSum,ans);
        dfs(root->right,targetSum,ans);
    }

    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        dfs(root,targetSum,0);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return sums;
    }
};