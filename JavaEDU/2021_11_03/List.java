package pkg01;

import java.util.ArrayList;

public class List {

	public static void main(String[] args) {
		ArrayList<String> region = new ArrayList<String>();
		ArrayList<String> name = new ArrayList<String>();
		
		
		for(int i=0; i<10; i++) {
			region.add(args[i]);
		}
		
		for(int i=10; i<16; i++) {
			name.add(args[i]);
		}
		
		for (String nm : name) {
			String flag = null;
			for (String rg : region) {
				if (nm.equals("정유석") && rg.equals("서울")) {
					flag = rg;
					break;
				}
				else if (nm.equals("강민식") && rg.equals("경남")) {
					flag = rg;
					break;
				}
				else if (nm.equals("한준석") && rg.equals("경기")) {
					flag = rg;
					break;
				}
				else if (nm.equals("박건호") && rg.equals("서울")) {
					flag = rg;
					break;
				}
				else if (nm.equals("정유진") && rg.equals("인천")) {
					flag = rg;
					break;
				}
				else if (nm.equals("이지훈") && rg.equals("충남")) {
					flag = rg;
					break;
				}
			}
			
			if (flag == null) {
				System.out.println(nm + " : "+ "Unknown");
			} else {
				System.out.println(nm + " : " + flag);
			}
		}
		
		
	}
}
