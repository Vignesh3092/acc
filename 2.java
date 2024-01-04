import java.util.*;
class queue
{
	static int summ(int a[],int n)
	{
		int s=0;
		for(int i=0;i<n;i++)
		{
			//System.out.print(a[i]+" ");
			s=s+a[i];
		}
		return s;
	}
	public static void main(String args[])
	{
		Queue<Integer> q=new LinkedList<Integer>();
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int f=0;
		for(int i=0;i<n;i++)
		{
			int m=sc.nextInt();
			q.add(m);
		}
		System.out.println("enter window size");
		int w=sc.nextInt();
		int sum=0;
		for(int i=0;i<n-w+1;i++)
		{
			int arr[]=new int[w];
			int ar[]=new int[n-w-f];
			for(int j=0;j<w;j++)
			{
				arr[j]=q.poll();
			}
			for(int j=0;j<n-w-f;j++)
			{
				ar[j]=q.poll();
			}
			
			int k=summ(arr,w);
			if(k>sum)
			{
				sum=k;
			}
			for(int j=1;j<w;j++)
			{
				q.add(arr[j]);
				
			}
			for(int j=0;j<n-w-f;j++)
			{
				q.add(ar[j]);
				
			}
			f++;
			
		}
		System.out.println(sum);
	}
}