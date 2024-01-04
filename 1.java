import java.util.*;
 class recursion {
    static void rec(int a[],int i,int n,LinkedList<Integer> l)
    {
        if(i>n)
        {
            System.out.println(l);
            return;
        }
        l.add(a[i]);
        rec(a,i+1,n,l);
        l.remove(a[i]);
        rec(a,i+1,n,l);
    }
    public static void main(String args[])
    {
        int arr[]={2,3,1};
        LinkedList<Integer> l=new LinkedList<Integer>();
        rec(arr,0,3-1,l);
    }
}
