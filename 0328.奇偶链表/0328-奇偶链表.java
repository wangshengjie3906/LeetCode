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
            //pre��¼fastָ���ǰһ���ڵ�
            pre = fast.next;
            fast = fast.next.next;
            //temp���ڰ���ڵ����������slowΪ�������ͷ���
            //temp2���ڼ�¼fast����һ���ڵ㣬�����fast�ڵ㼴��ڵ�ժ����
            ListNode temp = slow.next;
            ListNode temp2 = fast.next;

            slow.next = fast;
            fast.next = temp;
            pre.next = temp2;
            //fast�ڵ��Ѿ������������ˣ�ժ�������Ҳ�pre�ڵ�������Ҳ�Ӻ��ˣ�slow����һλ
            slow = slow.next;
            //fast���ó�pre�����б���
            fast = pre;
        }
        return head;
    }
}