import java.util.*;
class A
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number");
		int n=sc.nextInt();
		int c=0,i=0,t=n;
		while(t!=0)
		{
			t=t/2;
			c=c+1;
		}
		int a[]=new int[c+1];
		t=n;
		if(t<0)
		{
			t=t*-1;
		}
		while(t!=0)
		{
			a[i]=t%2;
			t=t/2;
			i++;
		}
		
		if(n>0)
		{
			a[c]=0;
			System.out.print("Signed Magnitude Representation-");
			for(i=c;i>=0;i--)
		{
			System.out.print(a[i]);
		}
		System.out.println();
		System.out.print("2's complement representation-");
		for(i=c;i>=0;i--)
		{
			System.out.print(a[i]);
		}
		}
		if(n<0)
		{
			a[c]=1;
			System.out.print("Signed Magnitude Representation-");
			for(i=c;i>=0;i--)
		{
			System.out.print(a[i]);
		}
		System.out.println();
		System.out.print("2's complement representation-");
		int b=1;
		
		for(i=0;i<c;i++)
		{
			if(b==1)
			{
				if(a[i]!=0)
				{
										b=0;
				}
				
			}
			else
			{
				if(a[i]==0)
				{
			a[i]=1;
				}
				else
				{
					a[i]=0;
				}
			}
				
		}
		for(i=c;i>=0;i--)
		{
			System.out.print(a[i]);
		}
			
		}
		if(n==0)
			{
				System.out.println("Signed Magnitude Representation-0");
				System.out.print("2's complement representation-0");
			}
	}
}