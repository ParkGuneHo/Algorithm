import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int N = scan.nextInt();
		int []dataN = new int[N];
		for(int i=0; i<N ; i++) {
			dataN[i] = scan.nextInt();
		}
		Arrays.sort(dataN);
		
		
		
		int M = scan.nextInt();
		int []dataM = new int[M];
		for(int i=0; i<M ; i++) {
			dataM[i] = scan.nextInt();
		}
		
		for(int i = 0; i < M; i++) {
			int m = dataM[i];			
			int left = 0, right = N-1;
			while (left <= right) {
				int mid = (left + right) / 2;
				
				if (dataN[mid] == m) { 
					System.out.println("1");
					break;
				}
				
				else if (m < dataN[mid]) {
					right = mid - 1;
				}
					
				else if (m > dataN[mid]) {
					left = mid + 1;
				}
			}
			if (left > right) {
				System.out.println("0");
			}
		}
	}
}