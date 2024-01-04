import java.util.Random;
import java.util.*;
class QuickSort {
    public static void quickSort(int[] arr, int pivot) {
        if (arr == null || arr.length == 0) {
            return;
        }
        partition(arr, 0, arr.length - 1, pivot);
    }

    private static void partition(int[] arr, int start, int end, int pivot) {
        if (start >= end) {
            return;
        }
		int pivotIndex;
        switch (pivot) {
            case 1 :
                pivotIndex = start;
				//System.out.println(arr[pivotIndex]);
                break;
            case 2:
                pivotIndex = start + new Random().nextInt(end - start + 1);
				//System.out.println(arr[pivotIndex]);
                break;
            case 3:
                int mid = (end+start)/2;
				pivotIndex=mid;
				//System.out.println(arr[pivotIndex]);
                break;
            default:
                throw new IllegalArgumentException("Invalid pivot mode: " + pivot);
        }
		 int pivotValue = arr[pivotIndex];
        int i = start;
        int j = end;
        while (i <= j) {
            while (arr[i] < pivotValue) {
                i++;
            }
            while (arr[j] > pivotValue) {
                j--;
            }
            if (i <= j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
                j--;
            }
        }
        partition(arr, start, j, pivot);
        partition(arr, i, end, pivot);
    }
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of array");
		int n=sc.nextInt();
        int[] arr =new int[n];
		System.out.println("Enter the Elements");
		for(int i=0;i<n;i++){
			arr[i]=sc.nextInt();
		}
		System.out.println("1.Pivot as First Element");
        System.out.println("2.Pivot as Random Element");
		System.out.println("3.Pivot as Median Element");
		System.out.println("Enter Choice");
		int x=sc.nextInt();
		if(x==1){
			quickSort(arr,1);
			System.out.println("Sorted array for pivot as first element" + 								Arrays.toString(arr));
        }
			else if(x==2){
			quickSort(arr, 2);
			System.out.println("Sorted array for pivot as random element" + 							Arrays.toString(arr));
        }
	else if(x==3){
			quickSort(arr, 3);
			System.out.println("Sorted array for pivot as median element" + 							Arrays.toString(arr));
		}
	}
}





        
