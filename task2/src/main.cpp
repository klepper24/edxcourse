#include "teacher.hpp"
#include "student.hpp"
#include "person.hpp"

int main() {

Person *person1 = new Student("Adam", "Malysz", 15, "Bach St 54", "Nice", 594555667);

Person *person2 = new Teacher("Albert", "Einstein", 59, "Baker st 18", "London", 667667667);

cout << "Identity of created people: " << endl;
person1->outputIdentity();
person2->outputIdentity();

cout << "Age of created people: " << endl;
person1->outputAge();
person2->outputAge();


	return 0;
}



