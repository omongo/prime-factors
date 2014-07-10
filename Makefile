all: prime_factors.o stringfrom.o
	clang++ -std=c++11 -lCppUTest -o test test.cpp prime_factors.o stringfrom.o
prime_factors.o:
	clang++ -std=c++11 -c prime_factors.cpp
stringfrom.o:
	clang++ -std=c++11 -c stringfrom.cpp
clean:
	rm -rf *.o main test

