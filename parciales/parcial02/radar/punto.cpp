#include <iostream>
#include "punto.h"

Punto::Punto(int a,int b):
  x(a),
  y(b),
  estado(INACTIVO)
{}

Punto::~Punto(){}

int Punto::obtX() const {
  return x;
}
int Punto::obtY() const{
  return y;
}
Estado Punto::obtEstado() const{
  return estado;
}
void Punto::activar(){
  estado=ACTIVO;
}
void Punto::inactivar(){
  estado=INACTIVO;
}
void Punto::avanzarNorte(){
  ++y;
}
void Punto::avanzarSur(){
  --y;
}
void Punto::avanzarEste(){
  ++x;
}
void Punto::avanzarOeste(){
  --x;
}


