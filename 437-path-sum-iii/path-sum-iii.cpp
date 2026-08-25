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

    // DFS 1 : Count paths starting from current node
    int findPath(TreeNode* root, long long targetSum) {

        if(root == NULL)
            return 0;

        int count = 0;

        // Agar current node se target complete ho gaya
        if(root->val == targetSum)
            count++;

        // Left aur right me path continue karo
        count += findPath(root->left, targetSum - root->val);
        count += findPath(root->right, targetSum - root->val);

        return count;
    }

    // DFS 2 : Har node ko starting point banao
    int pathSum(TreeNode* root, int targetSum) {

        if(root == NULL)
            return 0;

        return findPath(root, targetSum)
             + pathSum(root->left, targetSum)
             + pathSum(root->right, targetSum);
    }
};