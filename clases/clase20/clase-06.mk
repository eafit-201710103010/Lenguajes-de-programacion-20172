all: clase-06

clase-06: clase-06.o clase-06-impl.o
	$(CXX) -o $@ $^

clase-06.o: clase-06.cpp clase-06.h

clase-06-impl.o: clase-06-impl.cpp clase-06.h

clean: rm -f *.o
	rm -f clase-06
