CXXFLAGS=

all: funenterocorrecto

funenterocorrecto: funenterocorrecto.o
	g++ -g -o $@ $^

funenterocorrecto.o: funenterocorrecto.cpp

clean: rm -f  *.o
	rm -f  funenterocorrecto
