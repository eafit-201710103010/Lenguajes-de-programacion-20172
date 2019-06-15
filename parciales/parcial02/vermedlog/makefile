all:vermedlog

vermedlog: vermedlog.o
	g++ -g -o $@ $^

vermedlog.o:vermedlog.cpp

clean: rm -f *.o vermedlog
