package pkg01;

public class test {
	
	// Java는 Main 메서드를 통해서 실행되기 때문에 필수로 필요함
	public static void main(String[] args) { 
		
		System.out.println(args[0]);
		
		for(String string : args) {
			System.out.println(string);
		}
		
		
		System.out.println("-------------------");
		// for
		
		for(int i=0; i<args.length; i++) {
			System.out.println(args[i]);
		}
		
		
		System.out.println("-------------------");
		//while 문
		
		int j=0; 
		int tmp = args.length;
		
		while(j < tmp) {
			System.out.println(args[j]);
			j++;
		}
		
		
		System.out.println("-------------------");
		
		
		int cnt = 0;
		print(cnt, args.length, args);
		
	}
	
	// 재귀함수
	public static int print(int cnt, int length, String [] args) {
		
		
		if(cnt < length) {
			System.out.println(args[cnt]);
			cnt++;
			cnt = print (cnt, length, args);
		}
		
		return cnt;
	}
}


