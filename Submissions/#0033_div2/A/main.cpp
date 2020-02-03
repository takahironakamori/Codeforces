#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m, k;
  cin >> n >> m >> k;

  vector<pair<int,int>> rc(n);
  vector<bool> check(m);
  for (int i = 0; i < n; i++) {
    cin >> rc[i].first >> rc[i].second;
  }

  sort(rc.begin(), rc.end());

  int answer = 0;

  for (int i = 0 ; i < n; i++) {
    if (check[rc[i].first] == false) {
      answer += rc[i].second;
      check[rc[i].first] = true;
    }
    if (k <= answer) {
      answer = k;
      break;
    }
  }

  cout << answer << endl;

  return 0;

}
