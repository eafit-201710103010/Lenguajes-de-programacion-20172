#include<iostream>
#include<cstdlib>
using namespace std;
void intercambiar(int a , int b){
  int temp=a;
  a = b;
  b = temp;
}

int main(void){
  int k =10,j=20;
  cout << "k: " <<k<<" j: " << j << endl;

  intercambiar(k,j);
  
  cout << "k: " <<k<<" j: " << j << endl;

  return EXIT_SUCCESS;
}
