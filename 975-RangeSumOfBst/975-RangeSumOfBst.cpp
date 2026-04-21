// Last updated: 4/21/2026, 2:51:53 PM
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
    bool inInclusive(int n,int low,int high){
        return n>=low && n<=high;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root)return 0;
        int sum = 0;
        // if(!isInclusive(root->val,low,high));
        if(inInclusive(root->val,low,high))sum = root->val;
        return sum+rangeSumBST(root->right,low,high)+rangeSumBST(root->left,low,high);
    }
};