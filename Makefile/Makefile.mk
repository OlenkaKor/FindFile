#Makefile 

all: fileFinder

fileFinder: main.o find_file.o
	g++ $(CFLAGS) -o fileFinder.exe main.o find_file.o -lstdc++

main.o: main.cpp function.hpp
	g++ $(CFLAGS) -c main.cpp -o main.o

find_file.o: find_file.cpp function.hpp
	g++ $(CFLAGS) -c find_file.cpp -o find_file.o

clean:
	rm main.o find_file.o fileFinder.exe