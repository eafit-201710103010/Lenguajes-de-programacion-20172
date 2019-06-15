CXXFLAGS=

all: cppcalc

cppcalc: calc.o scanner.o token.o ast.o parser.o calculator.o
	g++ -g -o $@ $^

calc.o: calc.cpp calcex.h calculator.h

calculator.o: calculator.cpp calculator.h parser.h ast.h

scanner.o: scanner.cpp scanner.h calcex.h

token.o: token.cpp token.h

ast.o: ast.cpp ast.h calculator.h

parser.o: parser.cpp parser.h calcex.h

clean:
	rm -f *.o
	rm -f cppcalc
