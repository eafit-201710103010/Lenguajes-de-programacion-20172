all: clase-07

clase-07: clase-07.o clase-07-impl.o
	$(CXX) -o $@ $^

clase-07.o: clase-07.cpp clase-07.h

clase-07-impl.o: clase-07-impl.cpp clase-07.h

clean: rm -f *.o
	rm -f clase-07
