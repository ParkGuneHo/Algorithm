package pkg01;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.TreeMap;

public class Map {

	public static void main(String[] args) {
		ArrayList<String> region = new ArrayList<String>();
		ArrayList<String> name = new ArrayList<String>();
		
		
		for(int i=0; i<10; i++) {
			region.add(args[i]);
		}
		
		for(int i=10; i<16; i++) {
			name.add(args[i]);
		}
		
		HashMap<String, String> map = new HashMap<String, String>();
		
		
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
				} else {
					flag = "unknown";
				}
			}
			
			map.put(nm, flag);
			
			
		}
		
		TreeMap<String, String> treeMap = new TreeMap<String, String>( map );
        Iterator<String> treeMapIter = treeMap.keySet().iterator();
 
        while( treeMapIter.hasNext()) {
 
            String key = treeMapIter.next();
            String value = treeMap.get( key );
 
            System.out.println(key+" : "+value);
 
        }
		
		
	}
}
