/*
 * fichero: macro-02.cpp
 *
 * proposito: Ejemplo para explicar el funcionamiento de las funciones y métodos inline.
 *            Ejemplo del operador terciario (? : ).
 *         
 *
 * compile: $ g++ -c macro-02.cpp
 *          $ g++ -o macro-02 macro-02.o
 *        
 *          $ g++ -o macro-02 macro-02.cpp
 *          $ make macro-02
 *
 * Ejercicio
 */
#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX(x,y) (x >= y ? x : y)

int
main(void) {
  int a, b;

  while (cin >> a >> b) {
    cout << MAX(a,b) << endl;
  }

  return EXIT_SUCCESS;
}
