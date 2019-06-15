/*
 * fichero: funciones03.cpp
 * ficheros adjuntos: funciones03.h funciones03a.cpp funciones03.mk
 * compilar: Las siguientes acciones se hacen conjuntamente:
 *           $ g++ -c funciones03.cpp
 *           $ g++ -c funciones03a.cpp
 *           $ g++ -o funciones03 funciones03.o funciones03a.o
 *          
 *           $ make -f funciones03.mk
 *
 * ejecutar: $ ./funciones03
 *
 * proposito: Mostrar como se definen funciones y procedimientos en C++
 *            de forma separada y utilizar la compilacion separada.
 */
#include <iostream>
#include "funciones03.h"

using namespace std;

int
main(void) {

  int v1, v2;

  cout << "Entre dos números separados por espacio: ";
  cout.flush();
  cin >> v1 >> v2;

  imprimirEntero("Resultado: ", sumarDos(v1, v2));

  return 0;
}
