#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <cstdio>
#include <cstdlib>

using namespace std;

int
main() {

  enum States { Start, Ids };

  States cs = Start;
  int cc;
  ostringstream oss;
  int nIds= 0;
  int nCharsIds = 0;

  while ((cc = cin.get()) != EOF) {
    switch (cs) {
    case Start:
      if (isalpha(cc)) {
        cs = Ids;
        oss << (char) cc;
      }
      break;

    case Ids:
      if (isalnum(cc)) {
        cs = Ids;
        oss << (char) cc;
      }
      else {
        cout << oss.str() << endl;
        nIds++;
        nCharsIds += oss.str().size();
        cs = Start;
        oss.str("");
        oss.clear();
      }
    }
  }

  cout << "*** Resumen ***" << endl;
  cout << "---------------" << endl;
  cout << "number ids: " << nIds << endl;
  cout << "number char ids: " << nCharsIds << endl;

  return EXIT_SUCCESS;
}
