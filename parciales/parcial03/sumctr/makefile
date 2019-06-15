all:sumctr

sumctr: sumctr.o
	g++ -g -o $@ $^

sumctr.o:sumctr.cpp

clean: rm -f *.o sumctr
