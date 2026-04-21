// Last updated: 4/21/2026, 2:51:59 PM
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
    void leafEnd(TreeNode* root,vector<int> &v1){
        if(!root)return;
        if(!root->left&&!root->right){
            v1.push_back(root->val);
            return;
        }
        leafEnd(root->left,v1);
        leafEnd(root->right,v1);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1;
        vector<int> tree2;
        leafEnd(root1,tree1);
        leafEnd(root2,tree2);

        return tree1==tree2;

    }
};