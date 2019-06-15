/*
 * fichero: clase-10.cpp
 * otros ficheros: clase-10.h clase-10-impl.cpp clase-10.mk
 *
 * proposito: Mostrar la herencia en C++. Un arreglo de objetos
 *            que pertenecen a una jerarquia comun.
 *
 * compile: $ g++ -c clase-10.cpp
 *          $ g++ -c clase-10-impl.cpp
 *          $ g++ -o clase-10 clase-10.o clase-10-impl.o
 *          
 *          $ make -f clase-10.mk
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include "clase-10.h"

#define ARRAYSIZE(array,type) (sizeof(array)/sizeof(type))

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
  // Impresora impresoras[] = { ImpresoraGenerica("Generica 1"),
  //                            ImpresoraLaser("Laser 1", 5),
  //                            ImpresoraBurbuja("Burbuja 1", 10, 20, 30)
  // };
  Impresora *impresoras[3];

  impresoras[0] = new ImpresoraGenerica("Generica 1");
  impresoras[1] = new ImpresoraLaser("Laser 1", 5);
  impresoras[2] = new ImpresoraBurbuja("Burbuja 1", 10, 20, 30);

  char buffer[TAM_BUFFER];
  
  for (int i = 1; i <= 15 ; ++i) {
    for (int j = 0; j < ARRAYSIZE(impresoras,Impresora*); ++j) {
      ::sprintf(buffer, "documento: %i", i);
      impresoras[j]->imprimir(buffer);
    }
  }

  for (int j = 0; j < ARRAYSIZE(impresoras,Impresora*); ++j) {
    
    verImpr(*impresoras[j]);
  }

  return EXIT_SUCCESS;
}
