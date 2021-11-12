package pkg02;

import java.util.*;


public class test {
	
	static Map<String, Address> addressMap = new HashMap<String, Address>();
	static Map<String, PersonAddress> personAddressMap = new HashMap<String, PersonAddress>();
	static Map<String, Order> orderMap = new HashMap<String, Order>();
	static Map<String, Product> productMap = new HashMap<String, Product>();
	static Map<String, Person> personMap = new HashMap<String, Person>();
	
	static {
		// Address 입력
		StringBuffer ad = new StringBuffer();
		ad.append("01 부천로 푸르지오 112호123호 10010 \n");
		ad.append("02 사당로 르메이르 110동102호 20020 \n");
		ad.append("03 송파로 롯데타워 A동11001호 30030 \n");
		ad.append("04 안양로 아크로타워 B동5003호 40040 \n");
		ad.append("05 미사로 미사아파트 104동2102호 50050 \n");

		String[] addressdata = ad.toString().split("\n");

		for (String addr : addressdata) {
			Address address = new Address();

			String[] addr_full = addr.trim().split(" ");
			address.setAddrId(addr_full[0]);
			address.setStreetAddr(addr_full[1] + " " + addr_full[2]);
			address.setDetailAddr(addr_full[3]);
			address.setZipcode(addr_full[4]);
			
			addressMap.put(address.getAddrId(), address);
		}

		// PersonAddress 입력
		StringBuffer pa = new StringBuffer();
		pa.append("0001 01 \n");
		pa.append("0002 02 \n");
		pa.append("0003 03 \n");
		pa.append("0004 04 \n");
		pa.append("0005 05 \n");

		String[] personAddressData = pa.toString().split("\n");
		for (String personAddress_full : personAddressData) {
			PersonAddress personAddress = new PersonAddress();

			String[] personaddr_str = personAddress_full.split(" ");
			personAddress.setPersonId(personaddr_str[0]);
			personAddress.setAddrId(personaddr_str[1]);
			
			personAddressMap.put(personAddress.getPersonId(), personAddress);
		}

		// Order 입력
		StringBuffer od = new StringBuffer();
		od.append("01 005 0004 \n");
		od.append("02 001 0003 \n");
		od.append("05 002 0004 \n");

		String[] orderData = od.toString().split("\n");
		for (String orderData_full : orderData) {
			Order order = new Order();

			String[] order_str = orderData_full.split(" ");
			order.setOrderId(order_str[0]);
			order.setProductId(order_str[1]);
			order.setPersonId(order_str[2]);
			
			orderMap.put(order.getOrderId(), order);
		}

		// Product 입력
		StringBuffer pd = new StringBuffer();
		pd.append("001 유아 우유병 \n");
		pd.append("002 캠핑 스오누화이트면텐트 \n");
		pd.append("003 잡화 설화수윙클크림 \n");
		pd.append("004 여성복 원피스 \n");
		pd.append("005 남성복 정장 \n");

		String[] productData = pd.toString().split("\n");
		for (String productData_full : productData) {
			Product product = new Product();

			String[] product_str = productData_full.split(" ");
			product.setProductId(product_str[0]);
			product.setProductType(product_str[1]);
			product.setProductDescript(product_str[2]);
			
			productMap.put(product.getProductId(), product);
		}
		
		// Person 입력
		StringBuffer ps = new StringBuffer();
		ps.append("0001 정유진 30 여 \n");
		ps.append("0002 차민주 24 여 \n");
		ps.append("0003 이지훈 27 남 \n");
		ps.append("0004 한준석 25 남 \n");
		ps.append("0005 박건호 25 남 \n");

		String[] personData = ps.toString().split("\n");
		for (String personData_full : personData) {
			Person person = new Person();

			String[] person_str = personData_full.split(" ");
			person.setPersonId(person_str[0]);
			person.setName(person_str[1]);
			person.setAge(person_str[2]);
			person.setGender(person_str[3]);
			
			personMap.put(person.getPersonId(), person);
		}
	}
	
	public static void main(String[] args) {
		List<Bill> billList = new ArrayList<Bill>();
		
		Bill bill = new Bill();
		
		List<String> bill_unit = new ArrayList<String>();
		
		for(int i = 0; i < args.length; i++) {
			
			bill_unit.add(args[i]);
			
			if(",".equals(args[i]) || args.length-1 == i) {
				
				bill.setPersonId(bill_unit.get(0));
				bill.setOrderId(bill_unit.get(1));
				
				billList.add(bill);
				
				bill = new Bill();
				bill_unit = new ArrayList<String>();
			}
		}
				
		
		for(Bill b_data : billList) {
			
			String key1 = b_data.getPersonId();
			
			
			Person person = personMap.get(key1);
			
			if (person != null) {
				System.out.print(" " + person.getName());
				System.out.print(" " + person.getAge());
				System.out.print(" " + person.getGender());
			}
			else {
				System.out.print("구매자가 조회되지 않습니다.");
				break;
			}
						
			
			PersonAddress personAddress = personAddressMap.get(key1);
			
			if (personAddress != null) {
				Address address = addressMap.get(personAddress.getAddrId());
				
				System.out.print(" " + address.getAddrId());
				System.out.print(" " + address.getStreetAddr());
				System.out.print(" " + address.getDetailAddr());
			}
			else {
				System.out.print("구매자가 조회되지 않습니다.");
				break;
			}
			
			
			String key2 = b_data.getOrderId();
			
			Order order = orderMap.get(key2);
			
			if (order != null) {
				Product product = productMap.get(order.getProductId());
				
				System.out.print(" " + product.getProductType());
				System.out.println(" " + product.getProductDescript());
			}
			else {
				System.out.println(" 상품이 조회되지 않습니다.");
			}
			
		}
		
		
	}

}
