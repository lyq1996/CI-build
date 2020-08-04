all: hello

hello: helloworld.o
	g++ -o hello helloworld.o

helloworld.o: helloworld.cpp
	g++ -c -o helloworld.o helloworld.cpp

clean:
	rm -rf *.o
	rm -rf hello