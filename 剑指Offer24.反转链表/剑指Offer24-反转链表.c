/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    if(head == NULL)
    {
        return NULL;
    }

    if(head->next == NULL)
    {
        return head;
    }

    struct ListNode *rec = head;
    struct ListNode *low = head->next;
    struct ListNode *fast = low;

    while(rec != low)//注意条件，rec->next != NULL 会导致最后一个返回来
    {
        if(fast->next != NULL)
        {
            fast = fast->next;
        }

        low->next = rec;
        rec = low;
        low = fast;
    }

    head->next = NULL;//注意，不能先置空再进入循环，否则不会进入循环

    return rec;
}