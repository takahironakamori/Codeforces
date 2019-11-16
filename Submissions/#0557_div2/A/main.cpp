#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, h, m;
  cin >> n >> h >> m;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    a[i] = h;
  }

  for (int i = 0; i < m; i++) {
    int l, r, x;
    cin >> l >> r >> x;
    for (int j = l; j <= r; j++) {
      a[j - 1] = min(a[j - 1], x);
    }
  }

  int answer = 0;

  for (int i = 0; i < n; i++) {
    answer += a[i] * a[i];
  }

  cout << answer << endl;

}