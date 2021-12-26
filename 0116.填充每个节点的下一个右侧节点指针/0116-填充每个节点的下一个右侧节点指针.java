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
		//ѭ�������ǵ�ǰ�ڵ��left��Ϊ�գ���ֻ�и��ڵ�
		//������Ҷ�ӽڵ㶼���������ѭ�����˳���
		while(pre.left!=null)
        {
			Node tmp = pre;
			while(tmp!=null)
            {
				//��tmp�����ҽڵ㶼��������
				//ע:���ѭ���Ѿ��ж��˵�ǰ�ڵ��left��Ϊ��
				tmp.left.next = tmp.right;
				//��һ����Ϊ��˵����һ���Ѿ���������ɴ�����
				if(tmp.next!=null)
                {
					tmp.right.next = tmp.next.left;
				}
				//�����ұ߱���
				tmp = tmp.next;
			}
			//����һ�������߿�ʼ����
			pre = pre.left;
		}
		return root;
	}
}
