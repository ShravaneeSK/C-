#include <iostream>
using namespace std;

int main() {
  cout << "shra ";
  // defination of variable
  int n;
  cin >> n;
  int count = 1;  // starting of  repeat statement

  // ending piont of repeat staement
  while (count <= n) {
    // task
    cout << count << " ";

    // next state
    count += 1;
    // += (compond assignment)
  }

  return 0;
}