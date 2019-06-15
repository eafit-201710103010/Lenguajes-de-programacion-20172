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
#include "clase-07.h"

using namespace std;

Factor::Factor() : factor(0.1) {
  imprCons(*this, "Factor::Factor()");
}

Factor::Factor(double factor) : factor(factor) {
  imprCons(*this, "Factor::Factor(double)");
}

Factor::Factor(const Factor& factor) : factor(factor.factor) {
  imprCons(*this, "Factor(const Factor)");
}

Factor&
Factor::operator=(const Factor& factor) {
  std::cout << "Factor operator=" << endl;
  this->factor = factor.factor;
  return *this;
}

Factor::~Factor() {
  cout << "Destruyendo factor: " << factor << endl;
}

double Factor::obtFactor() const {
  return factor;
}

void Factor::modFactor(double factor) {
  this->factor = factor;
}

double Factor::multFactor(double value) const {
  return value * factor;
}

void imprCons(Factor& factor, const char* msg) {
  cout << "Construyendo Factor("
       << factor.factor
       << ")" << " "
       << msg << endl;
}
