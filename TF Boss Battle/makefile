CC = g++

main.exe : main.o Player.o
	${CC} -o main.exe main.o Player.o

main.o : main.cpp Player.cpp. Player.h
	${CC} -c -o main.o main.cpp
	
player.o : player.cpp Player.h
	${CC} -c -o Player.o Player.cpp
	
clean : 
	rm *.o
	rm *.exe