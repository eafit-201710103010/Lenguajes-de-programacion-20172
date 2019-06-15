/*
 * fichero: clase-03.cpp
 * otros ficheros: clase-03.h clase-03-impl.cpp
 *
 * proposito: Mostrar declaracion y definicion separada de clase.
 *            La instanciacion y destruccion de objetos globales y
 *            locales.
 *
 * compile: $ g++ -c clase-03.cpp
 *          $ g++ -c clase-03-impl.cpp
 *          $ g++ -o clase-03 clase-03.o clase-03-impl.o
 *
 * ejercicios: 1. Proteja la declaracion en el fichero de clase-03.h
 *                de redeclaraciones. Pruebe primero el estilo viejo
 *                y luego el nuevo.
 *             2. Implemente un fichero makefile nombrado clase-03.mk que
 *                compile completamente este proyecto. Luego de escribirlo
 *                este se compila con el siguiente comando:
 *                $ make -f clase-03.mk
 */
#include <iostream>
#include <cstdlib>
#include "clase-03.h"
#include "clase-03.h"
using namespace std;

Factor fOmision,dos(2.0);

int
main (void) {
  double valor;

  while (cin >> valor) {
    Factor interno(fOmision.obtFactor());

    cout << "valor: " << valor
         << " por factor: " << fOmision.obtFactor()
         << " = " << fOmision.multFactor(valor)
         << endl;
    fOmision.modFactor(fOmision.multFactor(valor));
  }

  return EXIT_SUCCESS;
}
