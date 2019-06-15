#include <iostream>
using namespace std;
int x;

// funcion principal
int main(void) {
  bool t = true;
  const signed short int Y = 1000;
  
  int* pX = &x;
  bool* pT = &t;
  const signed short int* pY = &Y;

  std::cout << "pX: " << std::hex << pX
            << " pT: " << std::hex << pT
            << " pY: " << std::hex << pY
            << std::endl;

  std::cout << "*pX: " << std::dec << *pX
            << " *pT: " << *pT
            << " *pY: " << *pY
            << std::endl;

  pX = pX + 1;
  
  std::cout<<"pX: "<< std::hex << pX
	   << std::endl;
  
  cout << "pX: " << *pX << endl;

  pX= NULL;
  cout<< "pX: " << *pX << endl;
  return 0;
}
  
