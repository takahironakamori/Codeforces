#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int x = 0;
  int y = 0;

  if (n % 2 == 0) {
    x = n - 8;
    y = n - x;
  } else {
    x = n - 9;
    y = n - x;
  }

  cout << x << " " << y << endl;

}