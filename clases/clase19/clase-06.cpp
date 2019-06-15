/*
 * fichero: clase-06.cpp
 * otros ficheros: clase-06.h clase-06-impl.cpp
 *
 * proposito: Mostrar declaracion y definicion separada de clase.
 *            La instanciacion y destruccion de objetos en el monticulo
 *            y referencias.
 *
 * compile: $ g++ -c clase-06.cpp
 *          $ g++ -c clase-06-impl.cpp
 *          $ g++ -o clase-06 clase-06.o clase-06-impl.o
 *
 * ejercicios: 1. Implemente un fichero makefile nombrado clase-06.mk que
 *                compile completamente este proyecto. Luego de escribirlo
 *                este se compila con el siguiente comando:
 *                $ make -f clase-06.mk
 */
#include <iostream>
#include <cstdlib>
#include "clase-06.h"

using namespace std;

Factor *fOmision = new Factor();

int
main(void) {
  double valor;

  while (cin >> valor) {
    Factor* interno = new Factor(*fOmision);

    cout << "valor: " << valor
         << " por factor: " << fOmision->obtFactor()
         << " = " << fOmision->multFactor(valor)
         << endl;

    fOmision->modFactor(fOmision->multFactor(valor));
    delete interno;
  }
  
  delete fOmision;
  return EXIT_SUCCESS;
}
