/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    /*���ýⷨ������ָ�루�������ܣ�*/

    if(head == NULL || head->next == NULL)
    {
        return false;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head->next;

    while(slow != fast)
    {
        //���������Լ���һ��
        if(fast == NULL || (fast->next) == NULL)
        {
            return false;
        }

        slow = slow->next;//�� 1 ��
        fast = fast->next->next;//�� 2 ��

    }

    return true;
}