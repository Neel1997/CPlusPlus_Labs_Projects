CC=g++

main.exe : main.o main.cpp
	${CC} -o main.exe main.o

main.o : main.cpp
	${CC} -c -o main.o main.cpp

clean :
	rm *.o
	rm *.exe