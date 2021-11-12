package pkg01;


public class Recursive {

	public static void main(String[] args) {
		String [] region = new String[10];
		String [] name = new String[6];
		
		for(int i=0; i<10; i++) {
			region[i] = args[i];
		}
		
		for(int i=10; i<16; i++) {
			name[i-10] = args[i];
		}
		
		func1(name, region, 0, 0);
	}
	
	public static void func1(String [] nm, String [] rg, int cnt1, int cnt2) {
		if (nm[cnt1].equals("정유석") && rg[cnt2].equals("서울")) {
			System.out.println(nm[cnt1] + " : " + rg[cnt2]);
			cnt1++;
			func1(nm, rg, cnt1, 0);
		}
		else if (nm[cnt1].equals("강민식") && rg[cnt2].equals("경남")) {
			System.out.println(nm[cnt1] + " : " + rg[cnt2]);
			cnt1++;
			func1(nm, rg, cnt1, 0);
		}
		else if (nm[cnt1].equals("한준석") && rg[cnt2].equals("경기")) {
			System.out.println(nm[cnt1] + " : " + rg[cnt2]);
			cnt1++;
			func1(nm, rg, cnt1, 0);
		}
		else if (nm[cnt1].equals("박건호") && rg[cnt2].equals("서울")) {
			System.out.println(nm[cnt1] + " : " + rg[cnt2]);
			cnt1++;
			func1(nm, rg, cnt1, 0);
		}
		else if (nm[cnt1].equals("정유진") && rg[cnt2].equals("인천")) {
			System.out.println(nm[cnt1] + " : " + rg[cnt2]);
			cnt1++;
			func1(nm, rg, cnt1, 0);
		}
		else if (nm[cnt1].equals("이지훈") && rg[cnt2].equals("충남")) {
			System.out.println(nm[cnt1] + " : " + rg[cnt2]);
		}
		else {
			if (cnt2 < 9) {
				cnt2++;
				func1(nm, rg, cnt1, cnt2);
			}
			else {
				System.out.println(nm[cnt1] + " : unknown");
				cnt1++;
				func1(nm, rg, cnt1, 0);
			}
			
		}
	}
}
