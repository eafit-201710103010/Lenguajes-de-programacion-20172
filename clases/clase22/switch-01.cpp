/* 
 * fichero: switch-01.cpp
 * compilar $ g++ -o switch-01 switch-01.cpp
 *          $ make switch-01
 * ejecutar: $ ./switch-01
 *
 */
#include <iostream>

using namespace std;

const int OPCION1 = 1;
const int OPCION2 = 2;
const int OPCION3 = 3;

void
mostrarMenu() {

  cout << "Menu" << endl;
  cout << "1. Subir nota en parcial" << endl;
  cout << "2. Subir nota en dos parciales" << endl;
  cout << "3. Rebajar nota en todos los parciales" << endl;
  cout << "4. Terminar" << endl;
  cout << "Escoja su opcion" << endl;
}

void ejecutarOpciones(int opcion) {

  switch (opcion) {
  case OPCION1:
    cout << "En el primer parcial todos tiene 5 puntos mas" 
	 << endl;

  case 2:
    cout << "En el primero y segundo todos tienen 10 puntos mas"
	 << endl;
  case OPCION3:
    cout << "En todos los parciales 20 puntos menos" 
	  << endl;
    break;

  default:
    cout << "Opcion " << opcion << endl;
  }
}
int
main() {

  int opcion;
  
  do {
    mostrarMenu();
    cin >> opcion;
    ejecutarOpciones(opcion);
  } while (opcion != 4);
  cout << "Termino programa" << endl;
}
