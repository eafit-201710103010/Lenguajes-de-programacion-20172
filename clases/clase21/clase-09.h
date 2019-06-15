#pragma once
#include <string>

enum ImpresoraEstado { ImpActiva, ImpInactiva };

class Impresora {
 public:
  Impresora(const std::string& nombre);
  void imprimir(const std::string& texto);
  std::string obtNombre() const;
  ImpresoraEstado obtEstado() const;
 private:
  std::string nombre;
 protected:
  ImpresoraEstado impEst;
};


class ImpresoraLaser : public Impresora {
 public:
  ImpresoraLaser(const std::string& nombre, int nivelToner);
  void imprimir(const std::string& texto);
  int obtenerNivelToner() const;
 private:
  int nivelToner;
};

class ImpresoraBurbuja : public Impresora {
 public:
  ImpresoraBurbuja(const std::string& nombre,
                   int rojo,
                   int azul,
                   int verde);
  void imprimir(const std::string& texto);
  int obtNivelRojo() const;
  int obtNivelAzul() const;
  int obtNivelVerde() const;
 private:
  int rojo;
  int azul;
  int verde;
  void disminuirTintas();
  static int disminuirTintaFactor(int tinta, int factor);
  bool hayTinta() const;
};
