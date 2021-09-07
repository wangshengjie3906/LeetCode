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

    while(rec != low)//ע��������rec->next != NULL �ᵼ�����һ��������
    {
        if(fast->next != NULL)
        {
            fast = fast->next;
        }

        low->next = rec;
        rec = low;
        low = fast;
    }

    head->next = NULL;//ע�⣬�������ÿ��ٽ���ѭ�������򲻻����ѭ��

    return rec;
}