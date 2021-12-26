/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *fast = head;
    struct ListNode *slow = NULL;
    struct ListNode *temp = NULL;

    while(fast != NULL)
    {
        temp = fast->next;
        fast->next = slow;
        slow = fast;
        fast = temp;
    }

    return slow;
}