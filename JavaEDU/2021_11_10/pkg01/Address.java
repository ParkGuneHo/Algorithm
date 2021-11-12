package pkg01;

public class Address {
	private String addrId;
	private String zipcode;
	private String streetAddr;
	private String detailAddr;
	
	public void setAddress(String addrId, String streetAddr, String detailAddr, String zipcode) {
		this.addrId = addrId;
		this.streetAddr = streetAddr;
		this.detailAddr = detailAddr;
		this.zipcode = zipcode;
	}
	
	public Address() {
		
	}

	public String getAddrId() {
		String addrId = this.addrId; // 보안요구사항
		return addrId;
	}
	public void setAddrId(String addrId) {
		this.addrId = addrId;
	}
	public String getZipcode() {
		String zipcode = this.zipcode;
		return zipcode;
	}
	public void setZipcode(String zipcode) {
		this.zipcode = zipcode;
	}
	public String getStreetAddr() {
		String streetAddr = this.streetAddr;
		return streetAddr;
	}
	public void setStreetAddr(String streetAddr) {
		this.streetAddr = streetAddr;
	}
	public String getDetailAddr() {
		String detailAddr = this.detailAddr;
		return detailAddr;
	}
	public void setDetailAddr(String detailAddr) {
		this.detailAddr = detailAddr;
	}
	
	
}
