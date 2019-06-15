/*
 * fichero: entradasalida03.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++
 *
 * compile: $ g++ -o entradasalida03 entradasalida03.cpp
 *          $ make entradasalida03
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int
main(void) {

  int i;
  float j;

  cin >> i >> j;

  i += 2; // i = i + 2;
  j += 2.02f;

  cout << i << endl;
  cout << j << endl;

  return EXIT_SUCCESS;
}
