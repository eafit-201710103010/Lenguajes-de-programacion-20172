
#include <iostream>
#include <limits>

using namespace std;
int leerEnteroCorrecto();

int main(){
  leerEnteroCorrecto();
  return 0;
}
  
  int leerEnteroCorrecto(){
    int entero;
    cout<<"Ingrese un entero: "<<endl;
   cin >> entero;
    
  while(cin.fail()){
    cin.clear();
    cin.ignore(numeric_limits<streamsize >::max(),'\n');
    cout<<"Ingrese un entero: "<<endl;
    cin >> entero;
  }
  cout << "Entero ingresado: " << entero<<endl;

  return 0 ;
  
}
