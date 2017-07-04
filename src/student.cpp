#include "student.hpp"

Student::Student(string fName, string lName, int ag, 
						string addr, string ci, int pho) 
	: firstName(fName), lastName(lName), age(ag), address(addr), 
		city(ci), phone(pho) {

}

string Student::getFirstName(){

	return firstName;

}

string Student::getLastName(){

	return lastName;

}

int Student::getAge(){

	return age;

}

string Student::getAddress(){

	return address;

}

string Student::getCity(){

	return city;

}

int Student::getPhone(){

	return phone;

}

void Student::sitInClass(){

	cout << "Sitting in main theater" << endl;

}
