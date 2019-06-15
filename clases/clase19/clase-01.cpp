/*
 * fichero: clase-01.cpp
 *
 * proposito: Mostrar declaracion y definicion separada de clase.
 *            La instanciacion y destruccion de objetos globales y
 *            locales.
 *
 * compile: $ g++ -o clase-01 clase-01.cpp
 *          $ make clase-01
 */
#include <iostream>
#include <cstdlib>

using namespace std;

class Factor {
  double factor;
  void imprCons();
public:
  Factor();
  Factor(double factor);
  virtual ~Factor();
  double obtFactor() const;
  void modFactor(double factor);
  double multFactor(double value) const;
} fOmision;

int
main(void) {
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
