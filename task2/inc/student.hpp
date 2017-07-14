#ifndef student_hpp
#define student_hpp

#include "person.hpp"

using namespace std;

class Student : public Person{

public:

	Student() {}
	Student(string fName, string lName, int ag, string addr, string ci, int pho);
	~Student() {}
	virtual void outputIdentity()
	{
		cout << "I am a student." << endl;
	} 
	virtual void outputAge()
	{
		cout << "I am a student and ";
Person::outputAge();	
	}
};


#endif
