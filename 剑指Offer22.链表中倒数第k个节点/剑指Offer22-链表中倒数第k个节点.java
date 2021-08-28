/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode getKthFromEnd(ListNode head, int k) {
        // 1， 使用栈
        // Stack<ListNode> stack = new Stack<>();
        // while(head != null){
        //     stack.push(head);
        //     head = head.next;
        // }
        // ListNode temp = null;
        // for(int i = 1; i <= k; i++){
        //     temp = stack.pop();
        // }

        // return temp;

        // 2，使用双指针
        ListNode end = head;
        int disc = 0;
        while(end != null){
            end =end.next;
            disc++;
        }
        for(int i = 1; i < (disc - k + 1); i++){
            head = head.next;
        }

        return head;
    }
}