/*
 * fichero: entradasalida04.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++
 *
 * compile: $ g++ -o entradasalida04 entradasalida04.cpp
 *          $ make entradasalida04
 */
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int
main(void) {

  int i;
  float j;

  while (cin >> i >> j) {
    
    i += 2; // i = i + 2;
    j += 2.02f;

    cout << left << setw(10) << i
	 << left << setw(10) << j << endl;

  }
  
  return EXIT_SUCCESS;
}
