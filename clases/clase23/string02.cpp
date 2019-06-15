/*
 * fichero: string02.cpp
 * 
 * compile: $ g++ -o string02 string02.cpp
 *          $ make string02
 *
 * ejecute: $ ./string02
 */
#include <string>
#include <iostream>

using namespace std;

int
main() {

  string s("Hello World");
  
  for (int i = 0; i < s.size(); i++) {
    cout << "s[" << i << "]=" << s[i] << endl;
  }
  
  s[0] = 'h';
  s[6] = 'w';
  
  cout << s << endl;
  
  return 0;
}
