import java.util.*;
class Node{
int data;
Node next;
}
class ll
{
static Node head=null;
static void remove(int n)
{
	if(n<3)
	{
		return;
	}
	else
	{
		Node a=head;
		head=head.next;
		int m=n/2;
		
		for(int i=0;i<m-2;i++)
		{
			a=a.next;
		}
		a.next=a.next.next;
		a=head;
		while(a.next.next!=null)
		{
			a=a.next;
		}
		a.next=null;
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
			System.out.print(n.data+"->");
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
insert(sc.nextInt());
}
System.out.println("before removing elements");
print();
remove(n);
System.out.println();
System.out.println("after removing elements");
print();


}
}
