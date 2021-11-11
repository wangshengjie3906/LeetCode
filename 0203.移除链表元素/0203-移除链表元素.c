/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    /**
    //ǰ��Ԫ�ض����ʱ
    while (NULL != head && val == head->val)
    {
        head = head->next;
    }
    if (NULL == head)
    {
        return head;
    }
    //�м����
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    while (NULL != fast->next)
    {
        if(val == fast->val)
        {
            slow->next = fast->next;
            fast = fast->next;
        }
        else
        {
            slow = fast;
            fast = fast->next;
        }
    }
    //ĩβ���
    if(val == fast->val)
    {
        slow->next = NULL;
    }
    return head;
    */

    struct ListNode* dummyHead = malloc(sizeof(struct ListNode));
    dummyHead->next = head;
    struct ListNode* temp = dummyHead;
    while (temp->next != NULL) {
        if (temp->next->val == val) {
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }
    }
    return dummyHead->next;
}