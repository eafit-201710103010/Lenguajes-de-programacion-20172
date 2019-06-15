#include <iostream>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;


int toInt(const char *str){
  string s(str);
  istringstream iss(s);
  int valor;
    iss >> valor;
    return valor;
}


int main (int argc, char* argv[]){

  int r= toInt(argv[1]);
  int s=0;
  for(int i=2;i<argc;i++){
  ifstream input(argv[i]);
  int f=0;
  int c;
  while((c=input.get()) != EOF){    
    if(isalnum(c)){
    int e= c%r;
	f=f+e;
    }
      
    }
  int a=f%r;
  cout << a<<endl;
  
  s=s+a;
  input.close();
  }
  int m=s%r;
  cout << m << endl;
}


