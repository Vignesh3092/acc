import java.util.*;
class Node{
	int data;
	Node next;
}
class ll
{
	static Node head;
	static int circular(int n)
	{
		Node a=head;
		for(int i=0;i<n-1;i++)
		{
			a=a.next;
		}
		if(a.next==null)
			
			{
				return 1;
			}
			else {
				return 0;
			}
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
		int m=circular(n);
		if(m==1)
		{
			System.out.println("not a circular list");
		}
		else
		{
			System.out.println("circular list");
		}
	}
}