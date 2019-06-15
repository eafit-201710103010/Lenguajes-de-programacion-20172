/*
 * fichero: clase-05.cpp
 * otros ficheros: clase-05.h clase-05-impl.cpp
 *
 * proposito: Mostrar declaracion y definicion separada de clase.
 *            La instanciacion y destruccion de objetos en el monticulo.
 *
 * compile: $ g++ -c clase-05.cpp
 *          $ g++ -c clase-05-impl.cpp
 *          $ g++ -o clase-05 clase-05.o clase-05-impl.o
 *
 * ejercicios: 1. Implemente un fichero makefile nombrado clase-05.mk que
 *                compile completamente este proyecto. Luego de escribirlo
 *                este se compila con el siguiente comando:
 *                $ make -f clase-05.mk
 */
#include <iostream>
#include <cstdlib>
#include "clase-05.h"

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
