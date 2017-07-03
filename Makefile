

KOM=g++

__start__: program
	./program

program: obj obj/main.o obj/student.o
	$(KOM) -Wall -o program obj/main.o obj/student.o

obj/main.o: inc/student.hpp src/main.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/main.o src/main.cpp

obj/student.o: inc/student.hpp src/student.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/student.o src/student.cpp


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
	@echo  "  make clean  - powoduj usuniecie produktow komilacji i konsolidacji."
	@echo
