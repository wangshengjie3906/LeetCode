/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool cmpChild(struct TreeNode* p, struct TreeNode* q)
{
    if(p == NULL && q == NULL)
    {
        return true;
    }

    if(p == NULL || q == NULL)
    {
        return false;
    }
    
    if(p->val != q->val)
    {
        return false;
    }
    
    return (cmpChild(p->left, q->right) && cmpChild (p->right, q->left));
}

bool isSymmetric(struct TreeNode* root){
    if(root == NULL)
    {
        return true;
    }
    
    return cmpChild (root->left, root->right);
}
