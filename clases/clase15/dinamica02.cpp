#include <iostream>

// funcion principal
int main(void) {
  bool t = true;
  const signed short int Y = 1000;
  
  int* pI = new int;
  bool* pB = new bool;
  double* pD = new double;

  std::cout << "pI: " << std::hex << pI
            << " pB: " << std::hex << pB
            << " pD: " << std::hex << pD
            << std::endl;

  *pI=0;
  *pB=true;
  *pD=12.23;
  
  std::cout << "*pI: " << std::dec << *pI
            << " *pB: " << *pB
            << " *pD: " << *pD
            << std::endl;

  for(int i =0;i<20;++i){
    std::cout << "pI: " << std::hex << (pI+i)
	      << "*pI: " << std::dec << *(pI+i)
	      << std::endl;
     
  }

  delete pB;
  delete pD;
  delete pI;
  
  return 0;
}
  
