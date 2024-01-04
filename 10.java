import java.util.*;
class GFG {
    static void towerOfHanoi(int n, int s,int e,Stack<Integer> s1,Stack<Integer> s2,Stack<Integer> s3)
    {
        if (n == 0) {
            return;
        }
        int m=6-(s+e);
        towerOfHanoi(n - 1,s,m,s1,s2,s3);
        if(s==1 && e==2)
            s2.push(s1.pop());
        if(s==1 && e==3)
            s3.push(s1.pop());
        if(s==2 && e==1)
            s1.push(s2.pop());
        if(s==2 && e==3)
            s3.push(s2.pop());
        if(s==3 && e==1)
            s1.push(s3.pop());
        if(s==3 && e==2)
            s2.push(s3.pop());
        towerOfHanoi(n - 1,m,e,s1,s2,s3);
    }


    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int N =sc.nextInt();
        Stack<Integer> s1=new Stack<Integer>();
        Stack<Integer> s2=new Stack<Integer>();
        Stack<Integer> s3=new Stack<Integer>();
        for(int i=N;i>=1;i--)
        {
            s1.push(i);
        }


        // A, B and C are names of rods
        towerOfHanoi(N,1,3,s1,s2,s3);
        System.out.println(s3);
    }
}
