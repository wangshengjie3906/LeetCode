/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL || head->next == NULL)
    {
        return head;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head->next;

    while(fast != NULL)
    {
        if(slow->val != fast->val)
        {
            slow = fast;
        }
        else
        {
            slow->next = fast->next;
        }

       // if(fast->next != NULL)
       // {
           
        fast = fast->next;

       // }
    }

    return head;
}