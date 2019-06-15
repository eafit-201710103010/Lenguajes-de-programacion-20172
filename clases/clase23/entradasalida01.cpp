/*
 * fichero: entradasalida01.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++
 *
 * compile: $ g++ -o entradasalida01 entradasalida01.cpp
 *          $ make entradasalida01
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int
main(void) {

  int i;

  cin >> i;

  i += 2; // i = i + 2;

  cout << i;

  return EXIT_SUCCESS;
}

