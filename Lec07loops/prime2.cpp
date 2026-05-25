#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int c = 2;

  while (c <= n - 1) {
    // task
    if ((n % c) == 0) {
      // n not prime
      // cout << "not prime" << endl;
      // in flowchart we stopped code here . how to achieve it
      break;
    }

    // next state
    c += 1;
  }
  if (c < n) {
    cout << "not prime" << endl;
  } else {
    cout << "Prime" << endl;
  }
}