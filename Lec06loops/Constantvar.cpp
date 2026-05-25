#include <iostream>
using namespace std;

// is there a way to cange the value of a const var in a scope = yes

#define PI 3.154  // macros

const int x = 90;

int main() {
  // x+=1;//not allowed
  const int x = 30;

  cout << x << endl;  // allowed

  if (x < 100) {
    int x = 90;
    cout << x << endl;
  }

  cout << PI << endl;
  return 0;
}