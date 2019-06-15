all: clase-03

clase-03: clase-03.o clase-03-impl.o
	$(CXX) -o $@ $^

clase-03.o: clase-03.cpp clase-03.h

clase-03-impl.o: clase-03-impl.cpp clase-03.h

clean: rm -f *.o
	rm -f clase-03
