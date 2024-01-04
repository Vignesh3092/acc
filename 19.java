import java.util.*;
class Node{
	int data;
	Node next;
}
class ll
{
	static Node head;
	
	static void dc(int n)
	{
		Node a=head;
		for(int i=0;i<n;i++)
		{
			Node b=a.next;
			for(int j=i+1;j<n;j++)
			{
				if(a.data>b.data)
				{
					int t=a.data;
					a.data=b.data;
					b.data=t;
				}
				b=b.next;
			}
			a=a.next;
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
	static void insert(int n)
	{
		Node node=new Node();
		node.data=n;
		node.next=null;
		if(head==null)
		{
			head=node;
		}
		else
		{
			Node a=head;
			while(a.next!=null)
			{
				a=a.next;
			}
			a.next=node;
		}
	}

	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			insert(sc.nextInt());
		}
		dc(n);
		print();
	}
}