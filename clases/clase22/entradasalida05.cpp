/*
 * fichero: entradasalida05.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++ desde ficheros.
 *
 * compile: $ g++ -o entradasalida05 entradasalida05.cpp
 *          $ make entradasalida05
 */
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int
main(void) {

  int i;
  float j;

  ifstream input("entrada01.txt");
  ofstream output("salida01.txt");
  
  while (input >> i >> j) {
    
    i += 2; // i = i + 2;
    j += 2.02f;

    output << left << setw(10) << i
	   << left << setw(10) << j << endl;

  }
  
  return 0;
}
