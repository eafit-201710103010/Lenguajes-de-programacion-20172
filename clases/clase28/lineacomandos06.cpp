/*
 * fichero: lineacomandos06.cpp
 * compile: $ g++ -std=c++11 -o lineacomandos06 lineacomandos06.cpp
 * ejecutar: $ ./lineacomandos06
 */
#include <iostream>
#include <string>
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

  int number1, number2;

  number1 = stoi(snum1);
  number2 = stoi(snum2);

  cout << "La suma de " << number1 << " y "
       << number2 << " es " << (number1 + number2)
       << endl;

  return 0;
}
