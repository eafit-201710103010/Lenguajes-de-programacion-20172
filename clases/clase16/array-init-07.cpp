/*
 * proposito: Mostrar la inicializacion de arreglos y la 
 *            forma de calcular su tamano desde tiempo de compilacion
 *            a traves de las operaciones sizeof()
 * 
 * fichero: array-init-07.cpp
 * compilar: $ g++ -o array-init-07 array-init-07.cpp
 *           $ make array-init-07
 * ejecutar (cygwin): $ ./array-init-07
 *          (linux):  $ ./array-init-07
 */
#include <iostream>

using namespace std;

int
main() {

  char a4[] = { 'a', 'b', 'c', '\0' , 'd', 'e', 'f' };

  cout << a4 << endl;

  for (int i = 0; i < sizeof(a4) / sizeof(char); i++) {
    cout << a4[i];
    
  }
  cout << endl;

  return 0;
}
