/*
 * fichero: clase-08.cpp
 * otros ficheros: clase-08.h clase-08-impl.cpp clase-08.mk
 *
 * proposito: Mostrar la herencia en C++. Como se maneja y los efectos
 *            colaterales.
 *
 * compile: $ g++ -c clase-08.cpp
 *          $ g++ -c clase-08-impl.cpp
 *          $ g++ -o clase-08 clase-08.o clase-08-impl.o
 *          
 *          $ make -f clase-08.mk
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include "clase-08.h"

using namespace std;

const int TAM_BUFFER = 256;

const char* estadoNombre(ImpresoraEstado ie) {
  return ImpActiva == ie ? "Activa" : "Inactiva";
}

void verImpr(Impresora& imp) {
  cout << imp.obtNombre() << " estado("
       << estadoNombre(imp.obtEstado()) << ")" << endl;
}

int
main(void) {
  Impresora impGen1("Generica 1");
  ImpresoraLaser impLaser1("Laser 1", 5);
  ImpresoraBurbuja impBurbuja1("Burbuja 1", 10, 20, 30);

  char buffer[TAM_BUFFER];
  
  for (int i = 1; i <= 15; ++i) {
    ::sprintf(buffer, "documento: %i", i);
    impGen1.imprimir(buffer);
    impLaser1.imprimir(buffer);
    impBurbuja1.imprimir(buffer);
  }

  verImpr(impGen1);
  verImpr(impLaser1);
  verImpr(impBurbuja1);

  return 0;
}
