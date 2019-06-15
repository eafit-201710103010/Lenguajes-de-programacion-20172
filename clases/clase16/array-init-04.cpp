/*
 * proposito: Mostrar la inicialización de un arreglo en C++
 *            y mostrar el tamaño definido por el sistema.
 * fichero: array-init-04.cpp
 * compilar: $ g++ -o array-init-04 array-init-04.cpp
 *           $ make array-init-04
 * ejecutar: $ ./array-init-04
 */
#include <iostream>

using namespace std;

int
main(int argc, char *argv[]) {
  char a4[] = {'a', 'b', 'c', 'd','e'};

  cout << a4 << endl;

  for (int i = 0; i < sizeof(a4) / sizeof(char); i++) {
    cout << "a4[" << i << "]=" << a4[i] << endl;
  }

  return 0;
}
