all: clase-04

clase-04: clase-04.o clase-04-impl.o
	$(CXX) -o $@ $^

clase-04.o: clase-04.cpp clase-04.h

clase-04-impl.o: clase-04-impl.cpp clase-04.h

clean: rm -f *.o
	rm -f clase-04
