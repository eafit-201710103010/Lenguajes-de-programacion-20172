CXXFLAGS=
all: verificarTres

verificarTres: verificarTres.o tresMayor.o
	g++ -g -o $@ $^

verificarTres.o: verificarTres.cpp

tresMayor.o: tresMayor.cpp tresMayor.h

clean: rm -f *.o
	rm -f verificarTres
