/*
 * fichero: string05.cpp
 * 
 * compile: $ g++ -std=c++0x -o string05 string05.cpp
 *          $ make string05
 *
 * ejecute: $ ./string05
 */
#include <string>
#include <iostream>

using namespace std;

int
main() {

  string s;
  
  cout << "Escribir un numero (entero, flotante, double): ";
  cout.flush();

  cin >> s;

  auto iValor = stoi(s);
  auto fValor = stof(s);
  auto dValor = stod(s);

  cout << "valor entero: " << iValor << endl;
  cout << "valor flotante: " << fValor << endl;
  cout << "valor double: " << dValor << endl;
  
  return 0;
}
