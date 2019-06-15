/* 
 * fichero: array-init-01.cpp
 * proposito: Mostrar la inicializacion de un arreglo.
 * compilar: $ g++ -o array-init-01 array-init-01.cpp
 *           $ make array-init-01
 * ejecutar (cygwin): $ ./array-init-01
 *          (linux):  $ ./array-init-01
 */
#include <iostream>

using namespace std;

int a1[5];  //= { 1, 2, 3, 4, 5 };
float a2[4]; // = { 1.1f, 2.2f, 3.3f, 4.4f };


int
main() {

  
  // Imprimir todos los valores del arreglo a1
  for (int i = 0; i < sizeof(a1) / sizeof(int); i++) {
    cout << "a1[" << i << "]=" << a1[i] << endl;
  }

  for (int i = 0; i < sizeof(a2) / sizeof(float); i++) {
    cout << "a2[" << i << "]=" << a2[i] << endl;
  }

  return 0;
}
