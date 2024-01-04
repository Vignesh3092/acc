import java.util.*;
class Queuee
{
	public static void main(String args[])
	{
		
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int n=s.length();
		System.out.println(n);
		Queue<Character> q1 = new LinkedList<>();
		Queue<Character> q3=new LinkedList<>();
		Queue<Character> q2=new LinkedList<>();
		for(int i=0;i<n;i++)
		{
			//String r=s.charAt(i);
			q1.add(s.charAt(i));
			q2.add(s.charAt(i));
		}
		int i=0;
		String c="";
		
		while(q1.size()>0)
		{
			int flag=1;
			char aa=q1.poll();
			for(int j=0;j<n;j++)
			{
				
				{
					char p=q2.poll();
					q3.add(p);
					if(i!=j)
					{
					if(aa==p)
					{
					flag=0;	
					
					}
					}
					
				}
			}
				System.out.println("q3="+q3);
				
				
				for(int g=0;g<n;g++)
				{
					
					q2.add(q3.poll());
				}
				System.out.println("q3="+q3);
				
				if(flag==1)
				{
					c=""+aa;
					break;
				}
				i++;
			System.out.println(q2);
		}
		System.out.println(c);
	}
}
				