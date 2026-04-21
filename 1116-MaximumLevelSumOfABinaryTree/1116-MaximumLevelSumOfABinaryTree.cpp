// Last updated: 4/21/2026, 2:51:45 PM
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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>queue;
        int maxSum = INT_MIN;
        int maxLevel = 1;
        int ansLevel = 1;
        // queue.push(root)
        queue.push(root);
        while(!queue.empty()){
            int sum = 0;
            int size = queue.size();
            
            for(int i = 0;i<size;i++){
                TreeNode* t = queue.front();
                queue.pop();
                sum+=t->val;
                if(t->left)queue.push(t->left);
                if(t->right)queue.push(t->right);

            }
            if(maxSum<sum){
                maxSum = sum;
                maxLevel = ansLevel;
            }
            ansLevel++;

        }

        return maxLevel;
        
    }
};