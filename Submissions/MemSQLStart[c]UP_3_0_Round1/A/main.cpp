#include <bits/stdc++.h>
using namespace std;

int main() {

  int K;
  cin >> K;

  int m = 0;

  for (int i = 0; i < K; i++) {
    int r;
    cin >> r;
    m = max(m, r);
  }

  if (25 < m) {
    cout << m - 25 << endl;
  } else {
    cout << 0 << endl;
  }

}