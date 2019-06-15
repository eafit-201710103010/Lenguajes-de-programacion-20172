/*
 * fichero: lineacomandos04.cpp
 * compile: $ g++ -o lineacomandos04 lineacomandos04.cpp
 * ejecutar: $ ./lineacomandos04
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int
main(int argc, char *argv[]) {

  if (argc != 2) {
    cerr << "Uso: " << argv[0] << " <idvariable> " << endl;
    return 1;
  }

  char *value = getenv(argv[1]);

  if (value == NULL) {
    cerr << "Uso; " << argv[0] << " <idvariable> " << endl;
    return 1;
  }

  cout << argv[1] << "=" << value << endl;
  
  return 0;
}
