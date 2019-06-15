/*
 * fichero: entradasalida06.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++, ficheros
 *            otras fuentes
 *
 * compile: $ g++ -o entradasalida06 entradasalida06.cpp
 *          $ make entradasalida06
 */
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>

using namespace std;

void procesar(istream& in, ostream& out);

int
main(void) {

  ifstream input("entrada01.txt");
  ofstream output("salida01.txt");

  procesar(input, output);
  
  procesar(cin, cout);
  
  return EXIT_SUCCESS;
}

void
procesar(istream& in, ostream& out) {
  int i;
  float j;
  
  while (in >> i >> j) {
    
    i += 2; // i = i + 2;
    j += 2.02f;
    
    out << left << setw(10) << i
	<< left << setw(10) << j << endl;
    
  }
  
}
