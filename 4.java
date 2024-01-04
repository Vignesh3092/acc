import java.util.*;
class queue
{
	public static void main(String args[])
	{
		Queue<Integer> q=new LinkedList<Integer>();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			q.add(sc.nextInt());
		}
		System.out.println("Enter number");
		int t=sc.nextInt();
		int arr[]=new int[n];
		System.out.println("BEFORE REVERSING FIRSRT "+t+" NUMBERS");
		System.out.println(q);
		for(int i=0;i<n;i++)
		{
			arr[i]=q.poll();
		}
		for(int i=t-1;i>=0;i--)
		{
			q.add(arr[i]);
		}
		for(int i=t;i<n;i++)
		{
			q.add(arr[i]);
		}
		System.out.println("AFTER REVERSING FIRSRT "+t+" NUMBERS");
		System.out.println(q);
	}
}