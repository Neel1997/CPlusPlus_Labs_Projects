CC = g++

main.exe : main.o list.o
	${CC} -o main.exe main.o list.o

main.o : main.cpp list.cpp list.h
	${CC} -c -o main.o main.cpp
	
list.o : list.cpp list.h
	${CC} -c -o list.o list.cpp
	
arr.o : arr.cpp arr.h
	${CC} -c -o arr.o arr.cpp
	
clean : 
	rm *.o
	rm *.exe