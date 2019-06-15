#include<iostream>
#include <string>
using namespace std;

int main(void){
  string cadena;
    getline(cin,cadena);
  int buenas=0;
  int total=0;
  for(int i=0; cadena[i] != '\0';i=i+2){
    if(cadena[i]>64 && cadena[i]<91){
      if(cadena[i+1]>96 && cadena[i+1]<123){
	++buenas;
      }
    }

    if(cadena[i]>96 && cadena[i]<123){
      if(cadena[i+1]>64 && cadena[i+1]<91){
	++buenas;
      }
    }

    ++total;
  }

  cout<< total << endl;
  cout<< buenas << endl;
  cout<< total-buenas << endl;
}
