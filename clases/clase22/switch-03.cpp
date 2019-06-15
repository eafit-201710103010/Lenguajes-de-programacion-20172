/* 
 * fichero: switch-03.cpp
 * compilar $ g++ -o switch-03 switch-03.cpp
 *          $ make switch-03
 * ejecutar: $ ./switch-03
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
    break;
  case 2:
    cout << "En el primero y segundo todos tienen 10 puntos mas"
	 << endl;
    break;
  case OPCION3:
    cout << "En todos los parciales 20 puntos menos" 
	  << endl;
    break;

  default:
    cout << "Opcion " << opcion << endl;
    break;

  case 4:
    cout << "A lo quiere es terminar" << endl;
    break;
  }
}
int
main() {

  int opcion;

  mostrarMenu();
  cin >> opcion;

  while (opcion != 4) {
    ejecutarOpciones(opcion);
    mostrarMenu();
    cin >> opcion;
  } 
  cout << "Termino programa" << endl;
}
