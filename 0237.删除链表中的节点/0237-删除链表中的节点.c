/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    // ֻ�ܷ��ʱ�ɾ���Ľڵ㣬��ô���ڵ�����һ���ڵ㣬�ٰ���һ���ڵ�ɾ��
    node->val = node->next->val;
    node->next = node->next->next;
}