#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int first = 0;
  int second = 0;
  int draw = 0;

  for (int i = 1; i <= 6; i++) {
    if (abs(a - i) == abs(b - i)) {
      draw++;
    } else if (abs(a - i) < abs(b - i)) {
      first++;
    } else {
      second++;
    }
  }

  cout << first << " " << draw << " " << second << endl;
  
}