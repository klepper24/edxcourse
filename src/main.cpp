#include "teacher.hpp"
#include "student.hpp"
#include "course.hpp"

int main() {

Student student1("Michael", "Ballack", 32, "Alexanderplatz 45", "Berlin", 667667667);
Student student2("Marcelo", "Diaz", 25, "Concha Espina 1", "Madrid", 775456987);
Student student3("Dario", "Srna", 18, "Kosciuszki", "Warsaw", 423888285);

Teacher coach("Jose", "Mourinho", 65, "Chopin street 2", "Lisbon", 77899);

Course interCpp("Intermediate C++", student1, student2, student3, coach);

cout << "Name of the course: " << interCpp.courseName << endl;
coach.gradeStudent();
cout << "Sit in class method: "; 
coach.sitInClass();
cout << endl;

Student studentka;

cout << studentka.getFirstName() << "a" << endl;
cout << studentka.getLastName() << endl;


	return 0;
}



