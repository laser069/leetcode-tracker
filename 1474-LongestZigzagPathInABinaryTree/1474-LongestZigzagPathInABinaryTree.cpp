// Last updated: 4/21/2026, 2:51:36 PM
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
    int maxLen = 0;
    void dfs(TreeNode* root,bool isLeft,int len){
        if(!root)return ;
        maxLen = max(maxLen,len);

        if(isLeft){
            dfs(root->left,false,++len);
            dfs(root->right,true,1);
        }else{
            dfs(root->right,true,++len);
            dfs(root->left,false,1);

        }
    }
    int longestZigZag(TreeNode* root) {
        dfs(root->left,false,1);
        dfs(root->right,true,1);
        return maxLen;
    }   
};