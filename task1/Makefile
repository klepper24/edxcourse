

KOM=g++

__start__: program
	./program

program: obj obj/main.o obj/student.o obj/teacher.o obj/course.o
	$(KOM) -Wall -o program obj/main.o obj/student.o obj/teacher.o obj/course.o

obj/main.o: inc/student.hpp inc/teacher.hpp inc/course.hpp src/main.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/main.o src/main.cpp

obj/student.o: inc/student.hpp src/student.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/student.o src/student.cpp

obj/teacher.o: inc/teacher.hpp src/teacher.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/teacher.o src/teacher.cpp

obj/course.o: inc/course.hpp src/course.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/course.o src/course.cpp


obj:
	mkdir obj

clean:
	rm -f obj/* program

help:
	@echo
	@echo  " Dostarczony plik Makefile pozwala wywolac polecenie make"
	@echo  " w nastepujacy sposob:"
	@echo  
	@echo  "  make        - powoduje kompilacje, konsolidacje i uruchomienie programu,"
	@echo  "  make clean  - powoduj usuniecie produktow kompilacji i konsolidacji."
	@echo
