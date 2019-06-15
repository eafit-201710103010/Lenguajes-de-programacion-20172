#include "clase-09.h"
#include <iostream>

using namespace std;

Impresora::Impresora(const string& nombre) :
  nombre(nombre), impEst(ImpActiva) { }

void Impresora::imprimir(const string& texto) {
  cout << "Impresora " << nombre
       << " imprimiendo "
       << texto
       << endl;
}

ImpresoraEstado Impresora::obtEstado() const {
  return impEst;
}

string
Impresora::obtNombre() const {
  return nombre;
}

ImpresoraLaser::ImpresoraLaser(const string& nombre,
                               int nivelToner)
  : Impresora(nombre), nivelToner(nivelToner) { }

void
ImpresoraLaser::imprimir(const string& texto) {
  if (nivelToner > 0) {
    cout << "Impresora " << obtNombre()
         << " imprimiendo "
         << texto
         << endl;
    nivelToner--;
    if (nivelToner == 0) impEst = ImpInactiva;
  }
}

int
ImpresoraLaser::obtenerNivelToner() const {
  return nivelToner;
}

ImpresoraBurbuja::ImpresoraBurbuja(const string& nombre,
                                   int rojo,
                                   int azul,
                                   int verde) :
  Impresora(nombre), rojo(rojo), azul(azul), verde(verde)
{ }

void
ImpresoraBurbuja::imprimir(const string& texto) {
  if (hayTinta()) {
    cout << "Impresora " << obtNombre()
         << " imprimiendo "
         << texto
         << endl;
    disminuirTintas();
    if (!hayTinta()) impEst = ImpInactiva;
  }
}

void ImpresoraBurbuja::disminuirTintas() {
  rojo  = disminuirTintaFactor(rojo, 1);
  azul  = disminuirTintaFactor(azul, 2);
  verde = disminuirTintaFactor(verde, 3);
}

int
ImpresoraBurbuja::disminuirTintaFactor(int tinta,
                                       int factor) {
  return tinta - factor > 0 ? tinta - factor : 0;
}

bool ImpresoraBurbuja::hayTinta() const {
  
  return rojo > 0 || verde > 0 || azul > 0;
}

