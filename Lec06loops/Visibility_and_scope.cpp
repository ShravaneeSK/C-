#include <iostream>
using namespace std;

int main() {
  int x{10};
  int p{50};

  while (x <= 12) {
    // int p{50};

    cout << x << " ";
    cout << p << " ";

    p += 10;
    x += 1;
  }

  cout << x << " ";
  cout << p << " ";
}