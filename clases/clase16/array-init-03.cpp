/*
 * fichero: array-init-03.cpp
 * compilar: $ g++ -o array-init-03 array-init-03.cpp
 *           $ make array-init-03
 * ejecutar (cygwin): $ ./array-init-03
 *          (linux):  $ ./array-init-03
 */
#include <iostream>

using namespace std;

int
main() {

  char a4[] = { 'a', 'b', 'c', 0 };

  cout << a4 << endl;

  return 0;
}
