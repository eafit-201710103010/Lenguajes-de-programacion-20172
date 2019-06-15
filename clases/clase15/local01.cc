#include <iostream>
using namespace std;


// funcion principal
int main(void) {
  int x;
  bool t = true;
  const signed short int y = 12;

  cout << "x: " << x << " y: " << y
	    << " t: " << t << endl;
  {
  cout << x << endl;
    float x= 12.23f;
    cout << "x: "<<  x << endl; { bool x = false;}
  }
  cout << x << endl;
  return 0;
}
  
