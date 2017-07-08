#include "teacher.hpp"

Teacher::Teacher(string fName, string lName, int ag, string addr, string ci, int pho)
: firstName(fName), lastName(lName), age(ag), address(addr), city(ci), phone(pho) {

}

string Teacher::getFirstName() {

	return firstName;

}

string Teacher::getLastName() {

	return lastName;

}

int Teacher::getAge() {

	return age;

}

string Teacher::getAddress() {

	return address;

}

string Teacher::getCity() {

	return city;

}

int Teacher::getPhone() {

	return phone;

}

void Teacher::gradeStudent() {

	cout << "Student graded" << endl;

}

void Teacher::sitInClass() {

	cout << "Sitting at front of class" << endl;

}

