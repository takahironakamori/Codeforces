#include <bits/stdc++.h>
using namespace std;

int main() {

  int x, y;
  cin >> x >> y;

  string answer = "white";

  double d = sqrt(x * x + y * y);

  if (x == 0 || y == 0 || d == round(d)) {
    answer = "black";
  } else {
    int d_ = (int) floor(d);
    if (d_ % 2 == 1 ^ x > 0 ^ y > 0) {
      answer = "white";
    } else {
      answer = "black";
    }
  }

  cout << answer << endl;

  return 0;

}
