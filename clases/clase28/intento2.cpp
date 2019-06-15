/*
 * fichero: lineacomandos02.cpp
 * compile: $ g++ -o lineacomandos02 lineacomandos02.cpp
 * ejecutar: $ ./lineacomandos02
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int
main(int argc , char *argv[]) {

  if(argc < 2 ){
    cerr << "Uso :" << argv[0]
	 << " fichero" << endl;
    return 1;
  }
  for(int i =1;i<argc;i++){

    ifstream input(argv[i]);
  if(!input){
    cerr << "Fichero: " << argv[1]
	 << "no existe" << endl;
    return 1;
  }
  int c;
  int local,visit;
    local=0;
    visit=0;
    bool eq=false;
  while((c =input.get()) != EOF){
    if(isdigit(c) && eq==false){
      visit=visit+c;
   
      eq=true;
    }else if (isdigit(c) && eq==true){
      local=local+c;
      
      eq=false;
	}        
   }
  if(local>visit){
    cout<< "Local"<<endl;
  }else if(visit>local){
    cout<<"Visitante"<<endl; 
  }else{
    cout<<"Empate"<<endl;
  }
  input.close();
 }

  
  return 0;
}
