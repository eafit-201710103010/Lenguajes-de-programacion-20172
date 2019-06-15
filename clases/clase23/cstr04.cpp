/*
 * fichero: cstr04.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr04 cstr04.cpp
 *          $ make cstr04
 */
#include <iostream>
#include <cstdlib>
#include <cctype>

using namespace std;

int
main(void) {

  const int MAX = 256;

  char buffer[MAX + 1];

  cin.getline(buffer, MAX);

  for (int i = 0; buffer[i] != '\0'; ++i) {

    buffer[i] = toupper(buffer[i]);
  }

  cout << buffer << endl;

  return EXIT_SUCCESS;
}
