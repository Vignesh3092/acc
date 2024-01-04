import java.util.*;
class Node
{
int data;
Node left;
Node next;
}
class ll
{
static Node head=null;
static void cycle(int m)
{
	Node h=head;
	for(int i=0;i<m-1;i++)
	{
		h=h.next;
	}
	h.next=head;
}
static void insert(int no)
{
Node n=new Node();
n.data=no;
n.left=null;
n.next=null;
if(head==null)
{
head=n;
}
else
{
Node t=new Node();
t=head;
while(t.next!=null)
{
t=t.next;
}
t.next=n;
Node r=head;
while(r.next.data!=no)
{
r=r.next;
}
n.left=r;
}
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
int n;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
for(int i=0;i<n;i++)
{
insert(sc.nextInt());
}

System.out.println("ENTER N VALUE");
int m=sc.nextInt();
cycle(m);
print();
}
}