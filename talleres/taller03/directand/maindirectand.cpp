#include "directand.h"
#include <iostream>

using namespace std;

int main(void){
  int a = 10000;
  int b = 20000;
  int *p, *p1;
  *p=a;
  *p1=b;
  bool* valor = directand(p,p1);

  if(*valor){
    cout << "a y b son mayores que cero" <<endl;
  }

  cout << "a: " << *p
       << "b: " << *p1 << endl;
  return 0;
}
