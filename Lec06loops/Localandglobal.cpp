#include <iostream>
using namespace std;

int main() {
  int x = 50;

  if (x > 10) {
    int x = 90;
    x += 1;
    cout << x << endl;
  }
  cout << x << endl;
  x += 10;

  while (x < 62) {  // for this x compiler will try to find x above it. if u
                    // mive out of a box that box is no longer in memory
    x += 10;
    int x = 35;
    x += 10;
    cout << x << endl;
    x += 10;
  }
  cout << x << endl;
  return 0;
}