/*
 * fichero: funciones01.cpp
 * compilar: $ g++ -o funciones01 funciones01.cpp
 *           $ make funciones01
 *
 * ejecutar: $ ./funciones01
 *
 * proposito: Mostrar como se definen funciones y procedimientos en C++
 */
#include <iostream>

using namespace std;

int sumarDos(int a, int b) {
  return a * 2 + b * 2; 
}

void imprimirEntero(const char mensaje[], int a) {
  cout << mensaje << ": " << a << endl;
  return;
}

int
main(void) {

  int v1, v2;

  cout << "Entre dos números separados por espacio: ";
  cout.flush();
  cin >> v1 >> v2;

  imprimirEntero("Resultado: ", sumarDos(v1, v2));

  return 0;
}
