/*
 * fichero: cstr01.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr01 cstr01.cpp
 *          $ make cstr01
 */
#include <iostream>

using namespace std;

int
main(void) {

  char buffer[256];

  cin >> buffer;

  cout << buffer << endl;

  return 0;
}
