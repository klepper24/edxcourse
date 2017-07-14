#ifndef teacher_hpp
#define teacher_hpp

#include "person.hpp"

using namespace std;

class Teacher : public Person{

public:

	Teacher() {}
	Teacher(string fName, string lName, int ad, string addr, string ci, int pho);
	~Teacher() {}
	virtual void outputIdentity()
	{
		cout << "I am a teacher." << endl;
	}
	virtual void outputAge()
	{
		cout << "I am a teacher and ";
Person::outputAge();
	}
};



#endif
