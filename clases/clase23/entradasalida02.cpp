/*
 * fichero: entradasalida02.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++ otros tipos de datos
 *
 * compile: $ g++ -o entradasalida02 entradasalida02.cpp
 *          $ make entradasalida02
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int
main(void) {

  float i;

  cin >> i;

  i += 2; // i = i + 2;

  cout << i << endl;

  return EXIT_SUCCESS;
}
