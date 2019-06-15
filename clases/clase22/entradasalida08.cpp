/*
 * fichero: entradasalida08.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Una forma
 *            correcta de manejar los flujos que fallan.
 *
 * compile: $ g++ -o entradasalida08 entradasalida08.cpp
 *          $ make entradasalida08
 */
#include <iostream>
#include <sstream>

using namespace std;

int
main(void) {
  int i;
  float f;
  
  do {
    string linea;
    getline(cin, linea);

    istringstream iss(linea);

    iss >> i >> f;

    if (iss) break;
  } while (true);

  i += 2;
  f += 2.02f;

  cout << i << " " << f << endl;

  return 0;
}
