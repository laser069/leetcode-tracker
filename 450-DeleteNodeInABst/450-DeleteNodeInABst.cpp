// Last updated: 4/24/2026, 4:34:47 PM
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
    TreeNode* lastRight(TreeNode* root){
        if(!root->right)return root;
        return lastRight(root->right);
    }
    TreeNode* dfs(TreeNode* root){
        if(!root->left)return root->right;
        if(!root->right)return root->left;
        TreeNode* rightNode = root->right;
        TreeNode* lRight = lastRight(root->left);
        lRight->right = rightNode;
        return root->left;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)return nullptr;
        if(root->val == key)return dfs(root);
        TreeNode* dummy = root;

        while(root){
            if(root->val>key){
                if(root->left&& root->left->val == key){
                    root->left = dfs(root->left);
                }else{
                    root = root->left;
                }
            }else{
                if(root->right && root->right->val == key){
                    root->right = dfs(root->right);
                }else{
                    root=root->right;
                }
            }

        }
        return dummy;
    }
};