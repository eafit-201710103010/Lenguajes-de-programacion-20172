#include <string>
#include <iostream>
#include <cctype>

using namespace std;

int
main(void) {
  string buffer;

  getline(cin, buffer);

  for (string::reverse_iterator it = buffer.rbegin();
       it != buffer.rend();
       it++) {
    cout << *it << endl;
  }

  return 0;
}
