import java.util.*;
class S
{
static int valid(String str)
{
Stack<Character> s=new Stack<Character>();
Stack<Character> s1=new Stack<Character>();
Stack<Character> s2=new Stack<Character>();
int n=str.length(),flag=0,m=0;
for(int i=0;i<n;i++)
{
s.push(str.charAt(i));
s1.push(str.charAt(i));
}

while(!s.empty())
{


char c=s.peek();
s2.push(s.pop());

m++;
if(c=='(' || c=='[' || c=='{')
	{
		return 1;
	}
if(s.peek()=='(' || s.peek()=='{' || s.peek()=='[')
{
	int x=0;
	if(s.peek()=='(' )
	x=1;
if(s.peek()=='{' )
	x=2;
if(s.peek()=='[' )
	x=3;
if(x==1)
{
	s.pop();
if(c==')')
{
flag=1;
for(int j=0;j<m;j++)
{
	if(j==0)
	{
		s2.pop();
	}
	else
	s.add(s2.pop());

}
/*System.out.println("s2:"+s2);
System.out.println("s:"+s);
System.out.println(flag);
*/
m=0;

}
else
{
	flag=0;
}
}
if(x==2)
{
	s.pop();
if(c=='}')
{
flag=1;
for(int j=0;j<m;j++)
{
	if(j==0)
	{
		s2.pop();
	}
	else
	s.add(s2.pop());

}
/*System.out.println("s2:"+s2);
System.out.println("s:"+s);
System.out.println(flag);
*/
m=0;


}
else
{
	flag=0;
	break;
}


}
if(x==3)
{
	s.pop();
if(c==']')
{
flag=1;
for(int j=0;j<m;j++)
{
	if(j==0)
	{
		s2.pop();
	}
	else
	s.add(s2.pop());

}
/*System.out.println("s2:"+s2);
System.out.println("s:"+s);
System.out.println(flag);*/

m=0;

}
else
{
	flag=0;
	break;
}


}
}
}
if(flag==1)
{
return 0;
}
else 
{
	return 1;
}

}
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
String s=sc.nextLine();
int x=valid(s);
if(x==0)
{
System.out.println("valid parenthesis string");
}
else
{
System.out.println("not a valid parenthesis string ");
}
}
}
