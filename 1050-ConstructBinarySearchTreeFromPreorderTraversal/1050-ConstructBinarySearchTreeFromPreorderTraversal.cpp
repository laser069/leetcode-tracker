// Last updated: 4/21/2026, 2:51:47 PM
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
    TreeNode* dfs(vector<int>& preorder,int& i,int ub){
        if(i==preorder.size()||preorder[i]>ub)return nullptr;
        TreeNode* root = new TreeNode(preorder[i++]);
        root->left = dfs(preorder,i,root->val);
        root->right = dfs(preorder,i,ub);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return dfs(preorder,i,INT_MAX);
    }
};