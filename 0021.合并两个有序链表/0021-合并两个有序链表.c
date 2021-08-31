/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    /**一般解法
    //先判断是否为异常输入
    if((l1 == NULL) && (l2 == NULL))
    {
        return NULL;
    }
    if((l1 == NULL) && (l2 != NULL))
    {
        return l2;
    }
    if((l1 != NULL) && (l2 == NULL))
    {
        return l1;
    }

    struct ListNode* head = NULL;
    struct ListNode* now = NULL;

    //选择头节点，和正在进行的now节点
    if((l1->val) < (l2->val))
    {
        head = l1;
        now = l1;
        l1 = l1->next;
    }
    else
    {
        head = l2;
        now = l2;
 //       if((l2->next) != NULL)//注意边界判断
  //      {
            l2 = l2->next;
 //       }
    }

    //循环处理，注意边界判断
    while((l1 != NULL)||(l2 != NULL))
    {
        if(l1 == NULL)//注意边界判断
        {
            now->next = l2;
            now = now->next;
            l2 = l2->next;
            continue;
        }
        if(l2 == NULL)//注意边界判断
        {
            now->next = l1;
            now = now->next;
            l1 = l1->next;
            continue;
        }

        if((l1->val) < (l2->val))//注意边界判断
        {
            now->next = l1;
            now = now->next;
            l1 = l1->next;
        }
        else
        {
            now->next = l2;
            now = now->next;
            l2 = l2->next;
        }
    }
    return head;
    */

    /**递归解法*/
    if(l1 == NULL)
    {
        return l2;
    }
    if(l2 == NULL)
    {
        return l1;
    }
    if(l1->val < l2->val)
    {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}