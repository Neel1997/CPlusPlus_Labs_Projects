CC = g++

a.exe : main.o main.cpp rectangle.h rectangle.cpp
	${CC} -o a.exe main.o
	
main.o : main.cpp rectangle.h rectangle.cpp
	${CC} -c -o main.o main.cpp
	${CC} -c -o rectangle.cpp
	
clean :
	rm *.o
	rm *.exe