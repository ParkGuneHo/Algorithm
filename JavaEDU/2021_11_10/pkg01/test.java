package pkg01;

import java.util.*;

public class test {
	
	static Map<String, Address> addresslist = new HashMap<String, Address>();
	static Map<String, PersonAddress> personAddresslist = new HashMap<String, PersonAddress>();
	
	static {
		StringBuffer sb = new StringBuffer();
		sb.append("01 부천로 푸르지오 112호123호 10010 \n");
		sb.append("02 사당로 르메이르 110동102호 20020 \n");
		sb.append("03 송파로 롯데타워 A동11001호 30030 \n");
		sb.append("04 안양로 아크로타워 B동5003호 40040 \n");
		sb.append("05 미사로 미사아파트 104동2102호 50050 \n");
		
		String [] addressdata = sb.toString().split("\n");
		
		for(String addr : addressdata) {
			Address address = new Address();
			
			String[] addr_full = addr.trim().split(" ");
			address.setAddrId(addr_full[0]);
			address.setStreetAddr(addr_full[1] + addr_full[2]);
			address.setDetailAddr(addr_full[3]);
			address.setZipcode(addr_full[4]);
			
			addresslist.put(address.getAddrId(), address);
			
		}
		
		StringBuffer pa = new StringBuffer();
		pa.append("0001 01 \n");
		pa.append("0002 02 \n");
		pa.append("0003 03 \n");
		pa.append("0004 04 \n");
		pa.append("0005 05 \n");
		
		String [] personAddressData = pa.toString().split("\n");
		for(String personAddress_full : personAddressData) {
			PersonAddress personAddress = new PersonAddress();
			
			String[] personaddr_str = personAddress_full.split(" ");
			personAddress.setPerson_id(personaddr_str[0]);
			personAddress.setAddrId(personaddr_str[1]);
			
			personAddresslist.put(personAddress.getPerson_id(), personAddress);
		}
	}
	
	public static void main(String[] args) {
		
		List<Person> personList = new ArrayList<Person>();
		
		Person person = new Person();
		
		List<String> person_unit = new ArrayList<String>();
		
		for(int i = 0; i < args.length; i++) {
			
			person_unit.add(args[i]);
			
			if(",".equals(args[i]) || args.length-1 == i) {
				
				person.setPerson_id(person_unit.get(0));
				person.setName(person_unit.get(1));
				person.setAge(person_unit.get(2));
				person.setGender(person_unit.get(3));
				
				personList.add(person);
				
				person = new Person();
				person_unit = new ArrayList<String>();
			}
		}
		
		
		for(Person p_data : personList) {
			System.out.print(p_data.getName());
			System.out.print(" " + p_data.getAge());
			System.out.print(" " + p_data.getGender());
			
			String key = p_data.getPerson_id();
						
			PersonAddress personAddress = personAddresslist.get(key);
			Address address = addresslist.get(personAddress.getAddrId());
			
			System.out.print(" " + address.getZipcode());
			System.out.print(" " + address.getStreetAddr());
			System.out.println(" " + address.getDetailAddr());
		}
	}

}
