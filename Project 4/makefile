CC = g++

main.exe : main.o vendingmachine.o
	${CC} -o main.exe main.o vendingmachine.o

main.o : main.cpp vendingmachine.cpp. vendingmachine.h
	${CC} -c -o main.o main.cpp
	
vendingmachine.o : vendingmachine.cpp vendingmachine.h
	${CC} -c -o vendingmachine.o vendingmachine.cpp
	
clean : 
	rm *.o
	rm *.exe