#include <iostream>
using namespace std;

int main() {
  int x = 1;
  while (x <= 10) {
    cout << x << endl;
    if (x == 5) {
      continue;  // if not satisfies skips till the end of the start scope ie
                 // here it will skipthe lines below and go to while
    }
    x += 1;
  }

  return 0;
}