#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, x;
  cin >> n >> x;

  vector<pair<int,int>> ab(n);
  for (int i = 0; i < n; i++) {
    cin >> ab[i].first >> ab[i].second;
    if (ab[i].second < ab[i].first) {
      swap(ab[i].first, ab[i].second);
    }
  }

  int answer = 0;

  int mn = ab[0].first;
  int mx = ab[0].second;
  for (int i = 1; i < n; i++) {
    if (ab[i].second < mn || mx < ab[i].first) {
      answer = -1;
      break;
    } else {
      mn = max(ab[i].first, mn);
      mx = min(ab[i].second, mx);
    }
  }

  if (answer != -1) {
    if (mn <= x && x <= mx) {
      answer = 0;
    } else {
      answer = min(abs(mn - x), abs(mx - x));
    }
  }

  cout << answer << endl;

  return 0;

}
