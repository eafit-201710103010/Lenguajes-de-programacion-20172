/*
 * fichero: cstr05.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr05 cstr05.cpp
 *          $ make cstr05
 */
#include <iostream>
#include <cstring>

using namespace std;

int
main(void) {

  const int MAX = 256;

  char buffer[MAX + 1];
  char buffer2[MAX + 1];

  cin.getline(buffer, MAX);
  cin.getline(buffer2, MAX);

  // Esto no funciona
  if (buffer == buffer2) {
    cout << "Son iguales" << endl;
  }
  else {
    cout << "Son diferentes" << endl;
  }

  return 0;
}
