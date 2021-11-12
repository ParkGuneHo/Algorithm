package pkg01;

public class Person {
	private String person_id;
	private String name;
	private String age;
	private String gender;
	
	public void setPerson(String name, String gender, String person_id, String age) {
		this.person_id = person_id;
		this.name = name;
		this.gender = gender;
		this.age = age;
	}
	
	public Person() {
		
	}
	
	public String getPerson_id() {
		String person_id = this.person_id;
		return person_id;
	}
	public void setPerson_id(String person_id) {
		this.person_id = person_id;
	}
	public String getName() {
		String name = this.name;
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public String getAge() {
		String age = this.age;
		return age;
	}
	public void setAge(String age) {
		this.age = age;
	}
	public String getGender() {
		String gender = this.gender;
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	
	
}
