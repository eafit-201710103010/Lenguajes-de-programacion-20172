#include "funciones03.h"
#include <iostream>

using namespace std;

int sumarDos(int a, int b)  {
  return a * 2 + b * 2; 
}

void imprimirEntero(const char mensaje[], int a) {
  cout << mensaje << ": " << a << endl;
  return;
}
