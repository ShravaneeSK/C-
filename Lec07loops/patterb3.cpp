#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int r = 1;

  while (r <= n) {
    int c = 1;
    while (c <= n) {
      if (r + c < n + 1) {
        cout << " ";
        // c += 1;
      } else {
        cout << " x";
        // c+=1;
      }
      c += 1;
    }
    cout << endl;

    r += 1;
  }
}
