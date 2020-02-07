#include <bits/stdc++.h>
using namespace std;

int main() {

  int r, g, b;
  cin >> r >> g >> b;

  int answer = 29;
  int count = 0;

  while (0 < r || 0 < g || 0 < b) {
    int d_ = count % 3;
    if (d_ == 0) {
      if (0 < r) {
        r -= 2;
      }
    } else if (d_ == 1) {
      if (0 < g) {
        g -= 2;
      }
    } else {
      if (0 < b) {
        b -= 2;
      }
    }
    count++;
  }

  cout << answer + count << endl;

  return 0;

}
