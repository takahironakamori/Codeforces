#include <bits/stdc++.h>
using namespace std;

int main() {

  int w, h, k;
  cin >> w >> h >> k;

  int answer = 0;
  k = k * 2 - 1;
  for (int i = 1; i <= k; i++) {
    if (i % 2 == 1) {
      int d = 2 * i - 2;
      answer += (w - d + h - d - 2) * 2;
    }
  }

  cout << answer << endl;

}