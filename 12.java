import java.util.*;
class Node
{
	int data;
	Node next;
}

class ll
{
	 static Node head=null;
	 
	static void insert(int m)
	{
		Node node=new Node();
		node.data=m;
		node.next=null;
		if(head==null)
		{
			head=node;
		}
		else
		{
			Node n=head;
			while(n.next!=null)
			{
				n=n.next;
			}
			n.next=node;
		}
	}
	static void print()
	{
		Node n=head;
		while(n.next!=null)
		{
			System.out.print(n.data+" ");
			n=n.next;
		}
		System.out.print(n.data);
	}
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			int m=sc.nextInt();
			insert(m);
		}
		
		print();
	}
}
	
	