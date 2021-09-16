/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    if(head == NULL)
    {
        return head;
    }
    
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    
    //快慢指针间隔 n 位
    for(int i = 0; i < n; i++)
    {
        /*//假设没有超出范围的测试用例，没有两个节点，删除第三个的情况
        if(fast->next != NULL)
        {
            fast = fast->next;
        }
        else
        {
            return head;
        }
        */
        
        fast = fast->next;
        if(fast == NULL)//删除的是头节点时
        {
            head = head->next;
            return head;
        }
    }
    
    //当快指针为空时，慢指针刚好指向要删除的节点，
    //所以，为了能够操作，当快指针的指向最后一个节点
    //时，慢指针指向需要删除的节点的前一个节点，当删除的是头节点时，单独处理，上面已处理
    while(fast->next != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    
    
    //进行移除操作
    slow->next = slow->next->next;
    
    return head;
}