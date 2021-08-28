/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public int[] reversePrint(ListNode head) {
        int len = 0;
        ListNode tempHead = head;
        while(head != null){
            len++;
            head = head.next;
        }
        if(len == 0){
            return new int[]{};
        }

        int[] temp1 = new int[len];
        int[] temp2 = new int[len];

        for(int i = 0;i<len;i++){
            temp1[i] = tempHead.val;
            tempHead = tempHead.next;
        }

        for(int i = 0;i<len;i++){
            temp2[i] = temp1[len-1-i];
        }
        return temp2;
    }
}