import java.util.*;
class Node{
	int data;
	Node next;
	Node random;
public 	Node(int n){
		data=n;
		next=null;
		random=null;
	}
}
class ll
{
	static Node head;


	static void insert(int n)
	{
		Node node=new Node(n);;
		
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
	static void random(int nu)
	{
		int n;
		Scanner sc=new Scanner(System.in);
		Node t=head;
		int i=0;
		while(t!=null)
		{
			System.out.println("Enter "+(i+1)+"node random pointer");
			n=sc.nextInt();
			Node te=head;
			while(te.data!=n)
			{
				te=te.next;
			}
			t.random=te;
			t=t.next;
			i++;
		}		
	}
	static void clonee()
	{
		Node n=head;
		while(n!=null)
		{
		Node m=n.next;
		Node l=new Node(n.data);
		n.next=l;
		l.next=m;
		n=l.next;
		}
		
		n=head;
		while(n!=null)
		{
			if(n.next!=null)
			{
				n.next.random=(n.random!=null)?n.random.next:null;
			}
			n=n.next.next;
		}
		n=head;
		Node t=n.next;
		Node mm=t;
		while(n.next.next!=null)
		{
		
			n.next=n.next.next;
			t.next=t.next.next;
			
			n=n.next;
			t=t.next;
	}
	head=mm;
	
	}
	
	
	static void print()
	{
		Node n=head;
		while(n!=null)
		{
			System.out.print(n.data+"->");
			n=n.next;
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
		random(n);
		clonee();
		print();
	}
}
