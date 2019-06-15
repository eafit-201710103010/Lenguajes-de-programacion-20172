#include <iostream>
#include <iomanip>
using namespace std;

int main (void){
  float a;
  float prom=0;
  int count=0;
  cin >> a;
  float b=1;  
  while(true){ 
    cin >> b;
    count++;    
    if(b>prom){
      prom=prom+ b/a;
	}else {
      prom=prom+ b *a;
    }
    prom=prom/count;
    cout << setw(15) << right << prom <<endl;

  }
}
