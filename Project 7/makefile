CC = g++

main.exe : main.o linked.o
	${CC} -o main.exe main.o linked.o

main.o : main.cpp linked.cpp linked.h
	${CC} -c -o main.o main.cpp
	
linked.o : linked.cpp linked.h
	${CC} -c -o linked.o linked.cpp
	
clean : 
	rm *.o
	rm *.exe