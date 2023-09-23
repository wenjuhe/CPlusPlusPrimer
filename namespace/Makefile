#specify the target
all: hello

hello: hello.o main.o
	g++ -o hello hello.o main.o

hello.o: hello.cpp hello.h
	g++ -c hello.cpp
main.o: main.cpp hello.h
	g++ -c main.cpp
clean:
	rm -f hello hello.o main.o