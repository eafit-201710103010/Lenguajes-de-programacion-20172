/*
 * fichero: lineacomandos01.cpp
 * compile: $ g++ -o lineacomandos01 lineacomandos01.cpp
 * ejecutar: $ ./lineacomandos01
 */
#include <iostream>

using namespace std;

int
main(int argc, char *argv[]) {

  for (int i = 0; i < argc; i++) {
    cout << "Comando: " << argv[i] << endl;
  }

  return 0;
}
