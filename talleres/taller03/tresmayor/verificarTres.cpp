#include "tresMayor.h"
#include <iostream>
using namespace std;

int main(void){
  int i =0;
  int a,b,c ;
  while(i<4){
    cout << "Ingrese una cadena de tres enteros: "<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << tresMayor(a,b,c) << endl;
    ++i;
  }
}
