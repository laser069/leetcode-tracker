// Last updated: 4/24/2026, 4:35:20 PM
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
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*>d;
        vector<int> ans;
        d.push(root);
        while(!d.empty()){
            int size = d.size();

            for(int i =0;i<size;i++){
            TreeNode* node = d.front();
            d.pop();
            if(i == size-1){
            ans.push_back(node->val);
            }
            
            if(node->left)d.push(node->left);
            if(node->right)d.push(node->right);
            
            }

        }
        return ans;
    }
};