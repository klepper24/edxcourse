

KOM=g++

__start__: program
	./program

program: obj obj/main.o obj/lab2.o
	$(KOM) -Wall -o program obj/main.o obj/lab2.o

obj/main.o: inc/lab2.hpp src/main.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/main.o src/main.cpp

obj/lab2.o: inc/lab2.hpp src/lab2.cpp
	$(KOM) -c -Wall -pedantic -iquote inc -o obj/lab2.o src/lab2.cpp


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
