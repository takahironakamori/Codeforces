#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, t;
  cin >> n >> t;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int answer = 1;
  bool flg = true;
  while (flg) {
    t = t - 86400 + a[answer - 1];
    if (t <= 0) {
      flg = false;
    } else {
      answer++;
    }
  }
  cout << answer << endl;

}