import java.util.*;
class Node{
	int data;
	Node next;
}
class ll
{
	static Node head=null;
	static void remove()
	{
		while(head.data==head.next.data)
		{
			head=head.next.next;
		}
		Node n=head.next;
		while(n.next!=null)
		{
			System.out.println(n.data);
			
			if(n.data==n.next.data)
			{
				Node a=head;
				while(a.next!=n)
				{
					a=a.next;
					
				}
				System.out.println(n.next.next);
				a.next=n.next.next;
				System.out.println(a.next);
				n=a.next;
				
			}
			else
			{
			n=n.next;
			}
		
				
		}
		
			
	}
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
		
		remove();
		print();
	}
}
	