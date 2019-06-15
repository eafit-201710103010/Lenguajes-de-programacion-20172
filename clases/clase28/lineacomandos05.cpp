/*
 * fichero: lineacomandos05.cpp
 * compile: $ g++ -o lineacomandos05 lineacomandos05.cpp
 * ejecutar: $ ./lineacomandos05
 */
#include <iostream>
#include <sstream>

using namespace std;

int
main(int argc, char *argv[]) {

  if (argc != 3) {
    cerr << "Uso: " << argv[0] << " <number> <number>" << endl;
    return 1;
  }

  string snum1(argv[1]);
  string snum2(argv[2]);

  istringstream sin1(snum1);
  istringstream sin2(snum2);

  int number1, number2;

  sin1 >> number1;
  sin2 >> number2;

  cout << "La suma de " << number1 << " y "
       << number2 << " es " << (number1 + number2)
       << endl;

  return 0;
}
