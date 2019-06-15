all: clase-10

clase-10: clase-10.o clase-10-impl.o
	$(CXX) -o $@ $^

clase-10.o: clase-10.cpp clase-10.h

clase-10-impl.o: clase-10-impl.cpp clase-10.h

