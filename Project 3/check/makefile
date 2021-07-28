CC = g++

main.exe : main.o grocery.o
	g++ -o main.exe main.o grocery.o
    
main.o : main.cpp grocery.cpp grocery.h
	g++ -c -o main.o main.cpp

grocery.o : grocery.cpp grocery.h
	${CC} -c -o grocery.o grocery.cpp
    
clean:
	rm *.exe
	rm *.o

