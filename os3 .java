import java.util.*;
class A
{
	public int numInfants;
    public int numAdults;
    public Semaphore capacity;
    public Lock lock;
	 public static  void infantEnter() throws InterruptedException {
		 if(numInfants*3<numAdults)
		 {
        capacity.acquire();
        lock.lock();
        try {
            numInfants++;
        } finally {
            lock.unlock();
        }
		 }
		 else
		 {
			 System.out.println("THERE IS NO REMAINING CAPACITY FO ADDITIONAL ADULTS ,YOU NEDD TO ADD ADULTS");
    }

    public  static void infantLeave() {
        lock.lock();
        try {
            numInfants--;
        } finally {
            lock.unlock();
        }
        capacity.release();
    }

    public static  void adultEnter() throws InterruptedException {
		
        capacity.acquire(3);
        lock.lock();
        try {
			numInfants+=3
            numAdults++;
        } finally {
            lock.unlock();
        }
    }

    public static  void adultLeave() {
        lock.lock();
        try {
			
            numAdults--;
        } finally {
            lock.unlock();
        }
        capacity.release(3);
    }

    public  static int getNumInfants() {
        System.out.println("NUMBER OF INFANTS ="+numInfants);
    }

    public static int getNumAdults() {
       System.out.println("NUMBER OF ADULTS ="+numAdults);
    }
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("ENETER NUMBER OF ADULTS");
		int n=sc.nextInt();
		System.out.println("ENTER NUMBER OF INFANTS");
		int m=sc.nextInt();
		while(n*3<m)
		{
			m=sc.nextInt();
		}
		numInfants=m;
		numAdults=n;
		while(true)
		{
			System.out.println("1:TO DISPLAY NUMBER OF INFANTS");
			System.out.println("2:TO DISPLAY NUMBER OF ADULTS");
			System.out.println("3:TO ADD AN INFANT");
			System.out.println("4:TO ADD AN ADULT");
			System.out.println("5:TO REMOVE AN INFANT");
			System.out.println("6:TO REMOVE AN ADULT");
			System.out.println("7:EXIT");
			int a=sc.nextInt();
			if(a==1)
			{
				getNumInfants();
			}
			if(a==2)
			{
				getNumAdults();
			}
			if(a==3)
			{
				infantEnter();
			}
			if(a==4)
			{
				
				adultEnter();
			}
			if(a==5)
			{
				infantLeave();
			}
			if(a==6)
			{
				adultLeave();
			}
			if(a==7)
			{
				exit();
			}
		}