#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<pair<int,int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }

  sort(a.begin(), a.end());

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (a[i].first + a[j].first == a[k].first) {
          cout << a[k].second << " " << a[j].second << " " << a[i].second << endl;
          return 0;
        }
      }
    }
  }

  cout << -1 << endl;

  return 0;

}
