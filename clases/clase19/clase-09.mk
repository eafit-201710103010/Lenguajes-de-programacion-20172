all: clase-09

clase-09: clase-09.o clase-09-impl.o
	$(CXX) -o $@ $^

clase-09.o: clase-09.cpp clase-09.h

clase-09-impl.o: clase-09-impl.cpp clase-09.h

