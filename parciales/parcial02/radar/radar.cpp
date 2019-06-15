#include "punto.h"
#include "estado.h"
#include <iostream>
#include <cstdlib>
#include <vector>

enum Accion { Activar, Inactivar, IrNorte, IrSur, IrEste, IrOeste };

Accion obtAccion(std::string& nombreAccion);
void mostrarResumen(std::vector<Punto>& puntos);

int
main(void) {
  std::vector<Punto> puntos;
  int nPuntos;

  std::cin >> nPuntos;

  for (int i = 0; i < nPuntos; i++) {
    int x, y;
    std::cin >> x >> y;
    Punto tmp(x,y);
    puntos.push_back(tmp);
  }

  std::string accion;
  int nPunto;

  while (std::cin >> accion >> nPunto) {
    switch(obtAccion(accion)) {
    case IrNorte:
      puntos[nPunto].avanzarNorte();
      break;
    case IrSur:
      puntos[nPunto].avanzarSur();
      break;
    case IrEste:
      puntos[nPunto].avanzarEste();
      break;
    case IrOeste:
      puntos[nPunto].avanzarOeste();
      break;
    case Activar:
      puntos[nPunto].activar();
      break;
    case Inactivar:
      puntos[nPunto].inactivar();
      break;
    }
  }

  mostrarResumen(puntos);
  
  return EXIT_SUCCESS;
}

Accion obtAccion(std::string& nombreAccion) {
  if (nombreAccion == "activar") return Activar;
  if (nombreAccion == "inactivar") return Inactivar;
  if (nombreAccion == "norte") return IrNorte;
  if (nombreAccion == "sur") return IrSur;
  if (nombreAccion == "este") return IrEste;
  if (nombreAccion == "oeste") return IrOeste;
}

void mostrarResumen(std::vector<Punto>& puntos) {
  
  for (std::vector<Punto>::iterator it = puntos.begin();
       it != puntos.end();
       ++it) {
    std::cout << "x: " << it->obtX()
              << " y: " << it->obtY()
              << std::endl;
  }
}
