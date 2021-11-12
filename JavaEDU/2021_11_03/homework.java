package pkg01;

public class homework {

	public static void main(String[] args) {
		String [] region = new String[10];
		String [] name = new String[6];
		
		String [] ans = new String[6];
		
		for(int i=0; i<10; i++) {
			region[i] = args[i];
		}
		
		for(int i=10; i<16; i++) {
			name[i-10] = args[i];
		}
		
		for (int i=0; i<6; i++) {
			for (int j=0; j<10; j++) {
				if (name[i].equals("정유석") && region[j].equals("서울")) {
					ans[i] = region[j];
					break;
				}
				else if (name[i].equals("강민식") && region[j].equals("경남")) {
					ans[i] = region[j];
					break;
				}
				else if (name[i].equals("한준석") && region[j].equals("경기")) {
					ans[i] = region[j];
					break;
				}
				else if (name[i].equals("박건호") && region[j].equals("서울")) {
					ans[i] = region[j];
					break;
				}
				else if (name[i].equals("정유진") && region[j].equals("인천")) {
					ans[i] = region[j];
					break;
				}
				else if (name[i].equals("이지훈") && region[j].equals("충남")) {
					ans[i] = region[j];
					break;
				}
			}
			
			if (ans[i] == null) {
				System.out.println(name[i] + " : "+ "Unknown");
			} else {
				System.out.println(name[i] + " : " + ans[i]);
			}
		}
		
		
	}
}