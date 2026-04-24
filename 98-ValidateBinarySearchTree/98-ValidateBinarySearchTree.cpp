// Last updated: 4/24/2026, 4:35:37 PM
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
    bool isValid(TreeNode* root,long long l,long long r){
        if(!root)return true;
        if (root->val >= r || root->val <= l){
            return false;
        }
        return isValid(root->left,l,root->val) && isValid(root->right,root->val,r);
    }

    bool isValidBST(TreeNode* root) {
        return isValid(root,LLONG_MIN,LLONG_MAX);
    }
};