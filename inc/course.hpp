#ifndef course_hpp
#define course_hpp


#include "student.hpp"
#include "teacher.hpp"

class Course {

public:

	string courseName;
	Student studentArray[3];
	Teacher master;
	Course() {}
	Course(string name, Student st1, Student st2, Student st3, Teacher t1);
	~Course() {}
	
};

#endif
