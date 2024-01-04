import java.util.*;
class Node{
int data;
Node next;
}
class ll
{
static Node head=null;
static void i(int m)
{
	Scanner sc=new Scanner(System.in);
	Node a=head;
	System.out.println("enter first element");
	int n1=sc.nextInt();
	System.out.println("enter middle element");
	int n2=sc.nextInt();
	System.out.println("enter last element");
	int n3=sc.nextInt();
	System.out.println("before adding elements");
print();
	Node n=new Node();
	n.data=n1;
	n.next=head;
	head=n;
	int b=m/2;
	for(int i=0;i<b-1;i++)
	{
		a=a.next;
	}
	Node n4=new Node();
	n4.data=n2;
	n4.next=a.next;
	a.next=n4;
	Node n5=new Node();
	n5.data=n3;
	while(a.next!=null)
	{
		a=a.next;
	}
	a.next=n5;
	n5.next=null;
	
	
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

i(n);
System.out.println();
System.out.println("after adding elements");
print();

}
}
