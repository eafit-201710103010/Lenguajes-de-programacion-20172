/*
 * fichero: macro-01.cpp
 *
 * proposito: Ejemplo inicial de macros
 *
 * compile: $ g++ -c macro-01.cpp
 *          $ g++ -o macro-01 macro-01.o
 *        
 *          $ g++ -o macro-01 macro-01.cpp
 *          $ make macro-01
 *
 */
#include <iostream>
#include <cstdlib>

using namespace std;

inline int
max(int x, int y) {
  if (x >= y) return x;
  else
    return y;
}

int
main(void) {
  int a, b;

  while (cin >> a >> b) {
    cout << max(a,b) << endl;
  }

  return EXIT_SUCCESS;
}
