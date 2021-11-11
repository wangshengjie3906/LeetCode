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
    public ListNode removeElements(ListNode head, int val) {
        /*
        //ǰ��Ԫ�ض����ʱ
        while (null != head && val == head.val)
        {
            head = head.next;
        }
        if (null == head)
        {
            return head;
        }
        //�м����
        ListNode fast = head;
        ListNode slow = head;
        while (null != fast.next)
        {
            if(val == fast.val)
            {
                slow.next = fast.next;
                fast = fast.next;
            }
            else
            {
                slow = fast;
                fast = fast.next;
            }
        }
        //ĩβ���
        if(val == fast.val)
        {
            slow.next = null;
        }
        return head;
        */

        ListNode dummyHead = new ListNode(0);
        dummyHead.next = head;
        ListNode temp = dummyHead;
        while (temp.next != null) {
            if (temp.next.val == val) {
                temp.next = temp.next.next;
            } else {
                temp = temp.next;
            }
        }
        return dummyHead.next;
    }
}