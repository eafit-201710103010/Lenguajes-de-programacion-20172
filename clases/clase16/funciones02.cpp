/*
 * fichero: funciones02.cpp
 * compilar: $ g++ -o funciones02 funciones02.cpp
 *           $ make funciones02
 *
 * ejecutar: $ ./funciones02
 *
 * proposito: Mostrar como se definen funciones y procedimientos en C++
 *            de forma separada en un mismo fichero.
 */
#include <iostream>

using namespace std;

int sumarDos(int a, int b);

void imprimirEntero(const char mensaje[], int a); 

int
main(void) {

  int v1, v2;

  cout << "Entre dos números separados por espacio: ";
  cout.flush();
  cin >> v1 >> v2;

  imprimirEntero("Resultado: ", sumarDos(v1, v2));

  return 0;
}

int sumarDos(int a, int b)  {
  return a * 2 + b * 2; 
}

void imprimirEntero(const char mensaje[], int a) {
  cout << mensaje << ": " << a << endl;
  return;
}
