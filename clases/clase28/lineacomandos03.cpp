/*
 * fichero: lineacomandos03.cpp
 * compile: $ g++ -o lineacomandos03 lineacomandos03.cpp
 * ejecutar: $ ./lineacomandos03
 */
#include <iostream>

using namespace std;

int
main(int argc, char *argv[], char *env[]) {

  for (int i = 0; env[i] != NULL; i++) {
    cout << "Variable[" << i << "]=" << env[i] << endl;
  }

  return 0;
}
