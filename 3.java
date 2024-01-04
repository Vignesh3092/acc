import java.util.*;
class queue
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		Queue<Integer> q=new LinkedList<Integer>();
		int n=sc.nextInt();
		for(int i=0;i<n;i++)
		{
			q.add(sc.nextInt());
		}
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=q.poll();
		}
		if(n%2==0)
		{
			int j=n/2;
			for(int i=0;i<(n/2);i++)
			{
				q.add(a[i]);
				q.add(a[j]);
				j++;
			}
		}
		else
		{
		int j=n/2+1;
		int o=a[n/2];
			for(int i=0;i<(n/2);i++)
			{
				q.add(a[i]);
				q.add(a[j]);
				j++;
			}
			q.add(o);
		}			
		System.out.println(q);
	}
}