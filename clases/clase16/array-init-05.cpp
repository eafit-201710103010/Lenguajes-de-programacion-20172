/*
 * proposito: mostrar la inicialización de un arreglo y relación
 *            con los punteros
 * fichero: array-init-05.cpp
 * compilar: $ g++ -o array-init-05 array-init-05.cpp
 *           $ make array-init-05
 * ejecutar (cygwin): $ ./array-init-05
 *          (linux):  $ ./array-init-05
 */
#include <iostream>

using namespace std;

int
main(int argc, char *argv[]) {
  char a5[10] = {'a', 'b', 'c', 'd'};

  cout << hex << (void*) a5 << dec << endl;
  
  for (int i = 0; i < sizeof(a5) / sizeof(char); i++) {

    cout << "*(a5 + " << i << ")=" << *(a5 + i) << endl;
  }

  cout << "a5[]=" << a5 << endl;

  return 0;
}
