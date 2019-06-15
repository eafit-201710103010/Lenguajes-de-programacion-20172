#include <iostream>
#include <iomanip>

using namespace std;

int main(void){
  int a=0;
  int temp=0;
  while(true){
    cin >> a;
    if(a<temp){
      cout << setw(15) << right << "-" << endl;
    }else{
      cout << setw(15) << right << "+" << endl;
    }
    temp=a;
  }
  return 0;
}
