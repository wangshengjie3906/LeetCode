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
    // if(root == NULL)//���ﲻҪ���п�ָ���жϣ����򷴶��Ǵ��
    // {
    //     return NULL;
    // }

    int *res = malloc(sizeof(int) * 2048); //ע�������ڴ泤��
    *returnSize = 0;

    order(root, res, returnSize);

    return res;
}