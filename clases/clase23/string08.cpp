#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int
main(void) {
  string buffer;
  string buffer2;

  getline(cin, buffer);
  getline(cin, buffer2);

  if (buffer == buffer2) {
    cout << "Son iguales";
  }
  else {
    cout << "Son diferentes";
  }

  cout << endl;

  return 0;
}
