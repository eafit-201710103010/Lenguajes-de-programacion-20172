/*
 * fichero: entradasalida01.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++
 *
 * compile: $ g++ -o entradasalida01 entradasalida01.cpp
 *          $ make entradasalida01
 */
#include <iostream>

int
main(void) {

  int i;

  std::cin >> i;

  i += 2; // i = i + 2;

  std::cout << i;

  return 0;
}
