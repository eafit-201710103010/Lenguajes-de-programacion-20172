/*
 * fichero: clase-04.cpp
 * otros ficheros: clase-04.h clase-04-impl.cpp
 *
 * proposito: Mostrar declaracion y definicion separada de clase.
 *            La instanciacion y destruccion de objetos globales y
 *            locales.
 *
 * compile: $ g++ -c clase-04.cpp
 *          $ g++ -c clase-04-impl.cpp
 *          $ g++ -o clase-04 clase-04.o clase-04-impl.o
 *
 * ejercicios: 1. Implemente un fichero makefile nombrado clase-04.mk que
 *                compile completamente este proyecto. Luego de escribirlo
 *                este se compila con el siguiente comando:
 *                $ make -f clase-04.mk
 */
#include <iostream>
#include <cstdlib>
#include "clase-04.h"

using namespace std;

Factor fOmision;

int
main(void) {
  double valor;

  while (cin >> valor) {
    Factor interno(fOmision);

    cout << "valor: " << valor
         << " por factor: " << fOmision.obtFactor()
         << " = " << fOmision.multFactor(valor)
         << endl;
    fOmision.modFactor(fOmision.multFactor(valor));
  }

  return EXIT_SUCCESS;
}
