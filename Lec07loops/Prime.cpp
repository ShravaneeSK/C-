/*give a value n, check if it is prime or not
Logic

check nos from 2 to sqare root of n , if any no divides thsi n then n not prime
else prime
*/
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
      cout << "not prime" << endl;
      // in flowchart we stopped code here . how to achieve it
      return 0;
    }

    // next state
    c += 1;
  }
  cout << "Prime" << endl;
}