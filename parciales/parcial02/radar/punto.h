#ifndef PUNTO_H
#define PUNTO_H
#include <string>
#include "estado.h"

class Punto{  
  int x;
  int y;
  Estado estado;
 public:
  Punto(int a , int y);
  virtual ~Punto();
  
  int obtX() const;
  int obtY() const;
  Estado obtEstado() const;
  void activar() ;
  void inactivar() ;
  void avanzarNorte() ;
  void avanzarSur() ;
  void avanzarEste() ;
  void avanzarOeste() ;
};

#endif
