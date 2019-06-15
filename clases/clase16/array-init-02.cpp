/*
 * fichero: array-init-02.cpp
 * compilar: $ g++ -o array-init-02 array-init-02.cpp
 *           $ make array-init-02
 * ejecutar (cygwin): $ ./array-init-02
 *          (linux):  $ ./array-init-02
 */
#include <iostream>

using namespace std;

int
main() {

  char a3[] = { 'a', 'b', 'c',0 };
  char a4[] = { 'd', 'e', 'f','\a','g','\b','\t','h','\n','\0'};

  for (int i = 0;i<sizeof(a3)/sizeof(char);++i){
    cout << "a3[" << i << "]=" << a3[i] << endl;
  }

  
  for (int i = 0;i<sizeof(a4)/sizeof(char);++i){
    cout << "a4[" << i << "]=" << a4[i] << endl;
  }
  
  cout << a3 << endl;
  cout << a4 << endl;

  return 0;
}
