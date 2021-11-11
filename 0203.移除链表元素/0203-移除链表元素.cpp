/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
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
        }
};