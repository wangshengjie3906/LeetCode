/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/

class Solution {
	public Node connect(Node root) {
		if(root==null)
        {
			return root;
		}
		Node pre = root;
		//循环条件是当前节点的left不为空，当只有根节点
		//或所有叶子节点都出串联完后循环就退出了
		while(pre.left!=null)
        {
			Node tmp = pre;
			while(tmp!=null)
            {
				//将tmp的左右节点都串联起来
				//注:外层循环已经判断了当前节点的left不为空
				tmp.left.next = tmp.right;
				//下一个不为空说明上一层已经帮我们完成串联了
				if(tmp.next!=null)
                {
					tmp.right.next = tmp.next.left;
				}
				//继续右边遍历
				tmp = tmp.next;
			}
			//从下一层的最左边开始遍历
			pre = pre.left;
		}
		return root;
	}
}
