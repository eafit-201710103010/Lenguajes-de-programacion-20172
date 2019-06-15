/*
 * fichero: clase-07.cpp
 * otros ficheros: clase-07.h clase-07-impl.cpp
 *
 * proposito: Mostrar declaracion y definicion separada de clase.
 *            La instanciacion y destruccion de objetos en el monticulo
 *            y referencias.
 *            Constructor de copia y sobrecarga de operadores.
 *
 * compile: $ g++ -c clase-07.cpp
 *          $ g++ -c clase-07-impl.cpp
 *          $ g++ -o clase-07 clase-07.o clase-07-impl.o
 *
 * ejercicios: 1. Implemente un fichero makefile nombrado clase-07.mk que
 *                compile completamente este proyecto. Luego de escribirlo
 *                este se compila con el siguiente comando:
 *                $ make -f clase-07.mk
 */
#include <iostream>
#include <cstdlib>
#include "clase-07.h"

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

  Factor final;

  final = *fOmision;

  delete fOmision;
  return EXIT_SUCCESS;
}
