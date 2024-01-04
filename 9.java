import java.util.*;
class Q
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		int n=s.length();
		String str=s,st="";
		Queue<Character> q=new LinkedList<Character>();
		
		for(int i=0;i<n;i++)
			{
				//System.out.println("STR"+str);
				for(int j=0;j<str.length();j++)
				{
				q.add(str.charAt(j));
				}
			
				if(str.length()>1)
				{
			st=str;
				}
				//System.out.println("ST"+st);
			str=" ";
			char g='?';
		while(q.size()>1)
		{
			//System.out.println(q);
			char c=q.poll();
			
			if(c!=q.peek() && g!=q.peek())
			{
				g=q.peek();
				str=str+c;
				str=str+q.peek();
				
				
				
			}
			if(c==q.peek() || g==q.peek())
			{
				q.poll();
			}
			
			if(q.size()==1)
			{
				str=str+q.poll();
			}
			//System.out.println("STR"+str);
		}
		if(str.length()==st.length())
		{
			break;
		}
			}
			System.out.println(st);
	}
}