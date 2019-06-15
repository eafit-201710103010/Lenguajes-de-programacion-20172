/*
 * fichero: entradasalida07.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Observando
 *            que pasa cuando un flujo falla.
 *
 * compile: $ g++ -o entradasalida07 entradasalida07.cpp
 *          $ make entradasalida07
 */
#include <iostream>

using namespace std;

int
main(void) {
  int i;
  float f;
  
  do {
    cin >> i >> f;

    if (cin) break;
  } while (true);

  i += 2;
  f += 2.02f;

  cout << i << " " << f << endl;;

  return 0;
}
