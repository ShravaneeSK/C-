#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int c = 2;
  int flag = 1;

  while (c <= n - 1) {
    // task
    if ((n % c) == 0) {
      flag = 0;
      break;
    }

    // next state
    c += 1;
  }
  if (flag == 0) {
    cout << "NOt Prime" << endl;
  } else {
    cout << "Prime" << endl;
  }
}