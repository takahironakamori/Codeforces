#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int mx = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    mx = max(mx, a);
    sum += a;
  }

  int current = mx;
  bool flg = true;
  while (flg) {
    if (sum < n * current - sum) {
      cout << current << endl;
      flg = false;
    }
    current++;
  }

}