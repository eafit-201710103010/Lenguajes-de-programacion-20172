all: clase-08

clase-08: clase-08.o clase-08-impl.o
	$(CXX) -o $@ $^

clase-08.o: clase-08.cpp clase-08.h

clase-08-impl.o: clase-08-impl.cpp clase-08.h

