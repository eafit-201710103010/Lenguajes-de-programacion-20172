#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int
main(void) {
  string buffer;

  getline(cin, buffer);

  for (string::iterator it = buffer.begin();
       it != buffer.end();
       it++) {
    cout << *it << endl;
  }

  return 0;
}
