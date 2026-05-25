/*
X
XX
XXX
XXXX

*/
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int r = 1;

  while (r <= n) {
    int c = 1;
    while (c <= r) {
      cout << "x";

      c += 1;  // next state
    }
    cout << endl;
    r += 1;
  }
}