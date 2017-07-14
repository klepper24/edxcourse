#include "person.hpp"


Person::Person(string fName, string lName, int ag, string addr, 
	string ci, int pho)
: firstName(fName), lastName(lName), age(ag), address(addr), 
	city(ci), phone(pho) {

}

string Person::getFirstName() {

	return firstName;

}
	
string Person::getLastName() {

	return lastName;

}
	
string Person::getAddress() {

	return address;
	
}
	
string Person::getCity() {

	return city;

}

int Person::getPhone() {

	return phone;

}


