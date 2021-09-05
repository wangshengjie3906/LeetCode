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
void inorder(struct TreeNode* root, int* result, int *resSize)
{
    if(root == NULL)
    {
        return;
    }

    inorder(root->left, result, resSize);
    result[(*resSize)++] = root->val;
    inorder(root->right, result, resSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    // if(root == NULL)
    // {
    //     return ;
    // }

    int *result = malloc(sizeof(int) * 128);//���нڵ���Ŀ�ڷ�Χ [0, 100] ��
    *returnSize = 0;
    inorder(root, result, returnSize);
    return result;
}