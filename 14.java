import java.util.*;
class Node{
	int data;
	Node next;
}
class ll
{
	static Node head;
	
	static void fraction(int n,int k)
	{
		int v=n/k;
		Node a=head;
		for(int i=1;i<v;i++)
		{
			a=a.next;
		}
		System.out.println(a.data);
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
		System.out.println("enter fractional value");
		int k=sc.nextInt();
		if(k<n)
		{
		fraction(n,k);
		}
		else{
			System.out.println("fractional value should be less than n");
		}
		
	}
}