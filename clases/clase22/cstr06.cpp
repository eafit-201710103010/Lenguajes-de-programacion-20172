/*
 * fichero: cstr06.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Para los tipos
 *            de datos c-string.
 *
 * compile: $ g++ -o cstr06 cstr06.cpp
 *          $ make cstr06
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

  bool iguales = true;

  // Esto tiene un bug en la comparacion
  for (int i = 0; buffer[i] != '\0' and buffer2[i] != '\0'; ++i) {
    if (buffer[i] != buffer2[i]) {
      iguales = false;
      break;
    }
  }
  
  if (iguales) {
    cout << "Son iguales" << endl;
  }
  else {
    cout << "Son diferentes" << endl;
  }

  return 0;
}
