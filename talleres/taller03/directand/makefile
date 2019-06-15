
all: maindirectand

maindirectand: maindirectand.o directand.o
	g++ -g -o $@ $^

maindirectand.o:  maindirectand.cpp

directand.o: directand.cpp directand.h

clean: rm -f *.o
	rm -f maindirectand
