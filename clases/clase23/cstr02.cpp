/*
 * fichero: cstr02.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr02 cstr02.cpp
 *          $ make cstr02
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int
main(void) {

  const int MAX = 256;

  char buffer[MAX + 1];

  cin.getline(buffer, MAX);

  cout << buffer << endl;

  return EXIT_SUCCESS;
}
