/*
 * fichero: string01.cpp
 * 
 * compile: $ g++ -o string01 string01.cpp
 *          $ make string01
 *
 * ejecute: $ ./string01
 */
#include <string>
#include <iostream>

using namespace std;

int
main() {

  string s("Hello World!");
  
  cout << s << endl;
  cout << s.size() << endl;

  string s2(s);

  cout << s2 << endl;
  cout << s2.size() << endl;

  string s3("Bye");

  s3 += " " + s.substr(6,6);
  cout << s3 << endl;
  cout << s3.size() << endl;
  
  string s4(s,6,6);

  cout << s4 << endl;
  cout << s4.size() << endl;
  
  return 0;
}
