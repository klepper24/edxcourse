#include "course.hpp"


Course::Course(string name, Student st1, Student st2, Student st3, Teacher t1) 
: courseName(name), studentArray({ st1, st2, st3}), master(t1) {

}
