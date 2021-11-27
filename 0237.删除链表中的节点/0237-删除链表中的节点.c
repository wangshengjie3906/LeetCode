/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    // 只能访问被删除的节点，那么将节点变成下一个节点，再把下一个节点删除
    node->val = node->next->val;
    node->next = node->next->next;
}