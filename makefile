all: main.o UtilitiesClass.o
	g++ -o bestever main.o UtilitiesClass.o

main.o: main.cpp UtilitiesClass.cpp
	g++ -c main.cpp

UtilitiesClass.o: UtilitiesClass.cpp
	g++ -c UtilitiesClass.cpp

clean:
	rm *.o bestever
