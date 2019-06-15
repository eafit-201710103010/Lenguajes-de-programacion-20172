#pragma once
#include <string>

enum ImpresoraEstado { ImpActiva, ImpInactiva };

class Impresora {
 public:
  Impresora(const std::string& nombre);
  virtual void imprimir(const std::string& texto) = 0;
  std::string obtNombre() const;
  ImpresoraEstado obtEstado() const;
  virtual ~Impresora();
 private:
  std::string nombre;
 protected:
  ImpresoraEstado impEst;
};

class ImpresoraGenerica : public Impresora {
 public:
  ImpresoraGenerica(const std::string& nombre);
  virtual ~ImpresoraGenerica();
  void imprimir(const std::string& texto);
};

class ImpresoraLaser : public Impresora {
 public:
  ImpresoraLaser(const std::string& nombre, int nivelToner);
  void imprimir(const std::string& texto);
  int obtenerNivelToner() const;
  ~ImpresoraLaser();
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
  ~ImpresoraBurbuja();
 private:
  int rojo;
  int azul;
  int verde;
  void disminuirTintas();
  static int disminuirTintaFactor(int tinta, int factor);
  bool hayTinta() const;
};
