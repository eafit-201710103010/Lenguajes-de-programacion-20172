/*
 * fichero: clase-09.cpp
 * otros ficheros: clase-09.h clase-09-impl.cpp clase-09.mk
 *
 * proposito: Mostrar la herencia en C++. Un arreglo de objetos
 *            que pertenecen a una jerarquia comun.
 *
 * compile: $ g++ -c clase-09.cpp
 *          $ g++ -c clase-09-impl.cpp
 *          $ g++ -o clase-09 clase-09.o clase-09-impl.o
 *          
 *          $ make -f clase-09.mk
 */
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include "clase-09.h"

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
  Impresora impresoras[] = { Impresora("Generica 1"),
                             ImpresoraLaser("Laser 1", 5),
                             ImpresoraBurbuja("Burbuja 1", 10, 20, 30)
  };

  char buffer[TAM_BUFFER];
  
  for (int i = 1; i <= 15 ; ++i) {
    for (int j = 0; j < ARRAYSIZE(impresoras,Impresora); ++j) {
      
      ::sprintf(buffer, "documento: %i", i);
      impresoras[j].imprimir(buffer);
    }
  }

  for (int j = 0; j < ARRAYSIZE(impresoras,Impresora); ++j) {
    
    verImpr(impresoras[j]);
  }

  return EXIT_SUCCESS;
}
