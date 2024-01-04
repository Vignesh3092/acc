import java.util.*;
class node{
	int x,y,distance;
	node(int x,int y,int distance)
	{
		this.x=x;
		this.y=y;
		this.distance=distance;
	}
}
class A
{
 static boolean isSafe(int i, int j, char[][] mat, int[][] result) {
        return mat[i][j] == 'O' && result[i][j] == -1;
    }
 
    
    static boolean isValid(int i, int j, int M, int N) {
        return (i >= 0 && i < M) && (j >= 0 && j < N);
    }
static void distancee(char a[][],int result[][],Queue<node> q,int n,int m)
{
	int[] row = { 0, -1, 0, 1 };
        int[] col = { -1, 0, 1, 0 };
 
       
        while (!q.isEmpty())
        {
          
            int x = q.peek().x;
            int y = q.peek().y;
            int distance = q.peek().distance;
 
            
            q.poll();
 
           
            for (int i = 0; i < row.length; i++)
            {
              
                if (isValid(x + row[i], y + col[i], n,m) &&
                        isSafe(x + row[i], y + col[i], a, result))
                {
                    result[x + row[i]][y + col[i]] = distance + 1;
                    q.add(new node(x + row[i], y + col[i], distance + 1));
                }
            }
        }
		int i,j;
		for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			System.out.print(result[i][j]+" ");
		}
		System.out.println();
	}
}	
		
		
public static void main(String args[])
{
	Scanner sc=new Scanner(System.in);
	int r=sc.nextInt();
	int c=sc.nextInt();
	char a[][]=new char[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a[i][j]=sc.next().charAt(0);
		}
	}
	Queue<node> q=new LinkedList<>();
	int b[][]=new int[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]=='M')
			{
				b[i][j]=0;
				q.add(new node(i,j,0));
			}
			else
			{
				b[i][j]=-1;
			}
		}
	}
	
	distancee(a,b,q,r,c);
			
}
}
	