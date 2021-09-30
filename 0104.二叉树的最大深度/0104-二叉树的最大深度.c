/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
    //深度优先搜索
    
    if(root == NULL)
    {
        return 0;
    }
    
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    
    if(maxLeft > maxRight)
    {
        return maxLeft + 1;
    }
    else
    {
        return maxRight + 1;
    }
    
}