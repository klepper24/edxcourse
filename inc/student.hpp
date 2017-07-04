#ifndef student_hpp
#define student_hpp

#include <iostream>
#include <string>

using namespace std;

class Student{

	string firstName;
	string lastName;
	int age;
	string address;
	string city;
	int phone;

public:

	Student() {};
	Student(string fName, string lName, int ag, string addr, string ci, int pho);
	~Student() {};
	string getFirstName();
	string getLastName();
	int getAge();
	string getAddress();
	string getCity();
	int getPhone();
	void sitInClass();

};


#endif
