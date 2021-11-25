/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int minDepth(TreeNode root) {
        /*
        if (null == root)
        {
            return 0;
        }

        if (null == root.left && null == root.right)
        {
            return 1;
        }
        
        int tempLeft = minDepth(root.left);
        int tempRight = minDepth(root.right);

        if ((null == root.left) || (null == root.right))
        {
            return tempRight + tempRight + 1;
        }
        System.out.println(root.val + " ");
        
        return Math.min(tempLeft, tempRight) + 1;
        */


        if (root == null) return 0;
        else if (root.left == null) return minDepth(root.right) + 1;
        else if (root.right == null) return minDepth(root.left) + 1;
        else return Math.min(minDepth(root.left), minDepth(root.right)) + 1;
    }
}