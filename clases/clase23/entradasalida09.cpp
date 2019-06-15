/*
 * fichero: entradasalida09.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Manejo
 *            de flujos de datos en memoria.
 *
 * compile: $ g++ -o entradasalida09 entradasalida09.cpp
 *          $ make entradasalida09
 */
#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int
main(void) {

  ostringstream oss;

  for (int i = 0; i < 10000; ++i) {
    cout << "line: " << i << " Programa" << endl;
  }


  // cout << oss.str();

  
  return EXIT_SUCCESS;
}
