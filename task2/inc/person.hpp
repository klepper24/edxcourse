#ifndef person_hpp
#define person_hpp

#include <iostream>
#include <string>

using namespace std;

class Person{

	int age;

protected:

	int phone;

public:
	string firstName;
	string lastName;
	string address;
	string city;
 	Person() {}
	Person(string fName, string lName, int ag, string addr, string ci, int pho);
	virtual ~Person() {}
	string getFirstName();
	string getLastName();
	string getAddress();
	string getCity();
	int getPhone();
	virtual void outputIdentity() = 0;
	virtual void outputAge()
	{  
		cout << "I am " << age << " years old." << endl;
	}

};


#endif
