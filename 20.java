import java.util.*;
class Node
{
int data;
Node next;
}
class ll
{
static Node head=null;
static void add()
{
Node n=head;
int sum=0;
while(n.next!=null)
{
sum=n.data+n.next.data;
System.out.println(sum);
n=n.next;
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
Node t=head;
while(t.next!=null)
{
t=t.next;
}
t.next=node;
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
add();

}
}