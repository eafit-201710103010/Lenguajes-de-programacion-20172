/*
 * fichero: clase-02.cpp
 *
 * proposito: Mostrar declaracion y definicion conjunta de una clase.
 *            La instanciacion y destruccion de objetos globales y
 *            locales.
 *
 * compile: $ g++ -o clase-02 clase-02.cpp
 *          $ make clase-02
 */
#include <iostream>
#include <cstdlib>

using namespace std;

class Factor {
  double factor;
  void imprCons() {
    cout << "Construyendo Factor(" << factor
         << ")" <<  endl;
  }
public:
  Factor() : factor(0.1) {
    imprCons();
  }
  Factor(double factor)  : factor(factor) {
    imprCons();
  }
  virtual ~Factor()  {
    cout << "Destruyendo factor: " << factor << endl;
  }
  double obtFactor() const  {
    return factor;
  }
  void modFactor(double factor)  {
    this->factor = factor;
  }
  double multFactor(double value) const  {
    return value * factor;
  }
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
