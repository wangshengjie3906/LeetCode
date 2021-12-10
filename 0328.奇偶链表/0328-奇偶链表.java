/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode oddEvenList(ListNode head) {
        if(head == null) return head;
        ListNode dummy = new ListNode(0,head);
        ListNode slow = head, fast = head,pre = head;
        while(fast.next != null && fast.next.next != null){
            //pre记录fast指针的前一个节点
            pre = fast.next;
            fast = fast.next.next;
            //temp用于把奇节点插进左边链表，slow为左链表的头结点
            //temp2用于记录fast的下一个节点，方便把fast节点即奇节点摘出来
            ListNode temp = slow.next;
            ListNode temp2 = fast.next;

            slow.next = fast;
            fast.next = temp;
            pre.next = temp2;
            //fast节点已经放入左链表了，摘出来的右侧pre节点后的链表也接好了，slow后移一位
            slow = slow.next;
            //fast重置成pre向后进行遍历
            fast = pre;
        }
        return head;
    }
}