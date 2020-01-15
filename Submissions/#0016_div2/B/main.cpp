#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  vector<int> b(m);
  vector<pair<int, int>> count(m);

  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    count[i].first = b[i];
    count[i].second = i;
  }

  sort(count.begin(), count.end());

  long long answer = 0;
  int current = n;

  for (int i = m - 1; 0 <= i; i--) {
    int c_ = count[i].second;
    answer += min(a[c_] * b[c_], current * b[c_]);
    current = max(0, current - a[c_]);
    if (current == 0) {
      break;
    }
  }

  cout << answer << endl;

}