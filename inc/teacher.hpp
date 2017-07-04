#ifndef teacher_hpp
#define techaer_hpp

#include <iostream>
#include <string>

using namespace std;

class Teacher{

	string firstName;
	string lastName;
	int age;
	string address;
	string city;
	int phone;

public:

	Teacher() {}
	Teacher(string fName, string lName, int ad, string addr, string ci, int pho);
	~Teacher() {}
	string getFirstName();
	string getLastName();
	int getAge();
	string getAddress();
	string getCity();
	int getPhone();
	void gradeStudent();
	void sitInClass();

};



#endif
