/*
 * fichero: enum01.cpp
 *
 * compilar: $ g++ -o enum01 enum01.cpp
 *           $ make enum01
 *
 * ejecutar: $ ./enum01
 */
#include <iostream>

enum DiaSemana {
  Domingo = 0, Lunes = 1, Martes, Miercoles, Jueves, Viernes, Sabado
};

DiaSemana
to_enum(int i) {
  switch (i % 7) {
  case 0: return Domingo; 
  case 1: return Lunes;
  case 2: return Martes;
  case 3: return Miercoles;
  case 4: return Jueves;
  case 5: return Viernes;
  case 6: return Sabado;
  default: return Domingo;
  }
}

int
main() {

  DiaSemana diaActual = Lunes;
  int tmp;

  std::cout << "Entre un día entre (Domingo=0) a (Sabado=6)" << std::endl;
  std::cin >> tmp;

  diaActual = to_enum(tmp);

  switch(diaActual) {
  case Domingo:
    std::cout << "es Domingo" << std::endl;
    break;

  case Lunes:
    std::cout << "es Lunes" << std::endl;
    break;

  case Martes:
    std::cout << "es Martes" << std::endl;
    break;

  case Miercoles:
    std::cout << "es Miercoles" << std::endl;
    break;

  case Jueves:
    std::cout << "es Jueves" << std::endl;
    break;

  case Viernes:
    std::cout << "es Viernes" << std::endl;
    break;

  case Sabado:
    std::cout << "es Sabado" << std::endl;
    break;

  default:
    std::cout << "incomprensible" << std::endl;
    break;
  }
  return 0;
}
