// Last updated: 4/24/2026, 4:34:36 PM
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
    TreeNode* dfs(vector<int>& nums,int left,int right){
        if(left>right)return nullptr;
        int maxVal = left;
        for(int i = left;i<=right;i++){
            maxVal = nums[maxVal]>nums[i]?maxVal:i;
        }
        TreeNode* root = new TreeNode(nums[maxVal]);

        root->left = dfs(nums,left,maxVal-1);
        root->right = dfs(nums,maxVal+1,right);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return dfs(nums,0,nums.size()-1);
        
    }
};