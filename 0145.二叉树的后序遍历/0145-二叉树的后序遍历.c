/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void order(struct TreeNode *root, int *res, int *returnSize){
    if(root == NULL)
    {
        return;
    }

    order(root->left, res, returnSize);
    order(root->right, res, returnSize);
    res[(*returnSize)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    // if(root == NULL)//这里不要进行空指针判断，否则反而是错的
    // {
    //     return NULL;
    // }

    int *res = malloc(sizeof(int) * 2048); //注意申请内存长度
    *returnSize = 0;

    order(root, res, returnSize);

    return res;
}