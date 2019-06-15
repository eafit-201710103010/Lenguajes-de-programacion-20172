/*
 * proposito: Mostrar la inicializacion de un arreglo y la
 *            relacion con su tamano.
 *
 * fichero: array-init-06.cpp
 * compilar: $ g++ -o array-init-06 array-init-06.cpp
 *           $ make array-init-06
 * ejecutar (cygwin): $ array-init-06
 *          (linux):  $ ./array-init-06
 */
#include <iostream>

using namespace std;

int
main() {
  int a6[8] = { 1, 2, 3, 4 };

  for (int i = 0; i < sizeof(a6) / sizeof(int); i++) {
    cout << "(a6+ "<< i <<")=" << (a6+i)  << "*(a6+i)" << *(a6+i) << endl;
  }

  return 0;
}
