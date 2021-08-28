/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode deleteNode(ListNode head, int val) {
        if(head == null){
            return null;
        }
        
        if(head.val == val){
            return head.next;
        }

        ListNode temp = head;
        while(temp.next != null){
            if(temp.next.val == val){
                if(temp.next.next != null){
                    temp.next = temp.next.next;
                    return head;
                }
                else{
                    temp.next = null;
                    return head;
                }
            }
            else{
                temp = temp.next;
            }
        }

        return head;
    }
}