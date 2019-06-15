#include <iostream>
#include "clase-06.h"

using namespace std;

Factor::Factor() : factor(0.1) {
  imprCons(*this);
}

Factor::Factor(double factor) : factor(factor) {
  imprCons(*this);
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

void imprCons(Factor& factor) {
  cout << "Construyendo Factor(" << factor.factor
       << ")" <<  endl;
}
