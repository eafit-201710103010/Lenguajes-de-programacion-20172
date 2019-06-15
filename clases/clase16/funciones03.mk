
all: funciones03

funciones03: funciones03.o funciones03a.o
	g++ -o $@ $^

funciones03.o: funciones03.cpp funciones03.h

funciones03a.o: funciones03a.cpp funciones03.h
