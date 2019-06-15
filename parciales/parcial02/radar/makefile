all: radar

radar: radar.o punto.o
	g++ -g -o $@ $^
radar.o: radar.cpp

punto.o: punto.cpp punto.h estado.h

clean: rm -f *.o radar

