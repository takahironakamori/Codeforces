#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int d = abs(a - b);

  if (d % 2 == 0) {
    d /= 2;
    cout << d * (d + 1) << endl;
  } else {
    d /= 2;
    cout << d * (d + 1) + d + 1 << endl;
  }
  
}