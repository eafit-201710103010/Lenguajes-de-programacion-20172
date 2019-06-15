/*
 * fichero: cstr03.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr03 cstr03.cpp
 *          $ make cstr03
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int
main(void) {

  const int MAX = 256;

  char buffer[MAX + 1];

  cin.getline(buffer, MAX);

  for (int i = 0; buffer[i] != '\0'; ++i) {

    if (buffer[i] >= 'a' and buffer[i] <= 'z') {
      buffer[i] = buffer[i] - ('a' - 'A');
    }
  }

  cout << buffer << endl;

  return EXIT_SUCCESS;
}
