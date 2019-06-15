/*
 * fichero: cstr07.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr07 cstr07.cpp
 *          $ make cstr07
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

  if (strcmp(buffer, buffer2) == 0) {
    cout << "Son iguales" << endl;
  }
  else {
    cout << "Son diferentes" << endl;
  }

  return 0;
}
