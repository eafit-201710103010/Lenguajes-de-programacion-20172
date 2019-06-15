#include <iostream>
#include "clase-03.h"

using namespace std;

Factor::Factor() : factor(0.1) {
  imprCons();
}

Factor::Factor(double factor) : factor(factor) {
  imprCons();
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

void Factor::imprCons() {
  cout << "Construyendo Factor(" << factor
       << ")" <<  endl;
}
