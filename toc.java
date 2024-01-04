import java.util.*;
class A
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		Stack<String> s=new Stack<String>();
		s.push("z0");
		int n=str.length();
		for(int i=0;i<n;i++)
		{
			
			if(str.charAt(i)=='a' && s.peek()=="z0")
			{
				s.push("a");
				System.out.print("q0->");
			}
			else if(str.charAt(i)=='a' && s.peek()=="a")
			{
				s.push("a");
				System.out.print("q0->");
			}
			else if(str.charAt(i)=='b' && s.peek()=="b")
			{
				s.push("b");
				System.out.print("q0->");
			}
			else if(str.charAt(i)=='b' && s.peek()=="z0")
			{
				s.push("b");
				System.out.print("q0->");
			}
			else if(str.charAt(i)=='a' && s.peek()=="b")
			{
				s.pop();
				System.out.print("q0->");
			}
			else
			{
				s.pop();
				System.out.print("q0->");
			}
			
			
		}
		if(s.peek()=="b")
		{
			while(!s.empty())
			{
				s.pop();
				System.out.print("q1->");
			}
			System.out.println("FINAL STATE");
				
		}
		if(str.length()==0)
		{
			System.out.println("FINAL STATE");
		}
	}
}