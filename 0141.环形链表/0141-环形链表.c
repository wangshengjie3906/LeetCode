/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    /*采用解法：快慢指针（龟兔赛跑）*/

    if(head == NULL || head->next == NULL)
    {
        return false;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head->next;

    while(slow != fast)
    {
        //后两个，以及后一个
        if(fast == NULL || (fast->next) == NULL)
        {
            return false;
        }

        slow = slow->next;//走 1 步
        fast = fast->next->next;//走 2 步

    }

    return true;
}