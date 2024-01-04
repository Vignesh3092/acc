import java.util.*;
class coa
{ 
 public static int complement(int x)
 {
  if(x==0)
   return 1;
  else
   return 0;
 }
 public static int[] alu(int x,int y,int c,int s)
 {
  int[] o=new int[2];
  int p;
  switch(s)
  {
   case 0:o[0]=complement(x&y);
       o[1]=0;
     break;
   case 1:o[0]=complement(x|y);
       o[1]=0;
     break;
   case 2:o[0]=x^y;
     o[1]=0;
     break;
   case 3:o[0]=complement(x^y);
     o[1]=0;
     break;
   case 4:p=x&y;
     o[0]=p^c;
     o[1]=p&c;
     break;
   case 5:o[0]=c^(x^y);
     o[1]=(x&y)|(x&c)|(y&c);
     break;
   case 6:o[0]=y^x;
     o[1]=complement(y)&x;
     break;
   case 7:o[0]=x^y;
     o[1]=complement(x)&y;
     break;
  }
  return o;
 }
 public static void main(String args[])
 {
  Scanner sc=new Scanner(System.in);
  System.out.println("Enter of number of testcases:");
  int n=sc.nextInt();
  int i,j;
  for(i=0;i<n;i++)
  {
   System.out.println("Enter number of bits:");
   int n1=sc.nextInt();
   System.out.println("Enter A:");
   int a=sc.nextInt();
   System.out.println("Enter B:");
   int b=sc.nextInt();
   System.out.println("Enter M:");
   int m=sc.nextInt();
   System.out.println("Enter F1:");
   int f1=sc.nextInt();
   System.out.println("Enter F2:");
   int f2=sc.nextInt();
   System.out.println("Enter C:");
   int c=sc.nextInt();
   int s=(m*4)+(f1*2)+f2;
   int x,y,num=0;
   int[] z=new int[2];
   for(j=0;j<n1;j++)
   {
    x=a%10;
    y=b%10;
    z=alu(x,y,c,s);
    num+=z[0]*Math.pow(10,j);
    c=z[1];
    a=a/10;
    b=b/10;
   }
	int[] ar=new int[n1];
	while(num!=0)
	{
		ar[i]=num%10;
		num=num/10;
		i++;
	}
	System.out.print("The result is:");
	for(i=n1-1;i>=0;i--)
	{
		System.out.print(ar[i]);
	}
   if(s==6||s==7)
    System.out.println("\nThe Difference is:"+c);
   else
    System.out.println("\nThe Carry is:"+c);
  }
 }  
}