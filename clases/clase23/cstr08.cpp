/*
 * fichero: cstr08.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr08 cstr08.cpp
 *          $ make cstr08
 */
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int
main(void) {

  const int MAX = 256;

  char buffer[MAX * 2 + 1];
  char buffer2[MAX + 1];

  cin.getline(buffer, MAX);
  cin.getline(buffer2, MAX);

  strcat(strcat(buffer, " "), buffer2);

  cout << buffer << endl;

  return EXIT_SUCCESS;
}
