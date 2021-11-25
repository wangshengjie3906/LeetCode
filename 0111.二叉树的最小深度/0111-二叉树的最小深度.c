/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if (root == NULL) return 0;
    else if (root->left == NULL) return minDepth(root->right) + 1;
    else if (root->right == NULL) return minDepth(root->left) + 1;
    else return fmin(minDepth(root->left), minDepth(root->right)) + 1;
}