#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n, m, r;
  cin >> n >> m >> r;

  int minS = 1010;
  for (int i = 0; i < n; i++) {
    int s;
    cin >> s;
    minS = min(minS, s);
  }

  int maxB = 0;
  for (int i = 0; i < m; i++) {
    int b;
    cin >> b;
    maxB = max(maxB, b);
  }

  if (minS < maxB) {
    int count = r / minS;
    r = r % minS + count * maxB;
  }

  cout << r << endl;

}