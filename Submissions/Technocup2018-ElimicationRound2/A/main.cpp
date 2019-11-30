#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> num(10);

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    num[a[i]]++;
  }
  sort(a.begin(),a.end());

  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    num[b[i]]++;
  }
  sort(b.begin(),b.end());

  for (int i = 1; i < 10; i++) {
    if (num[i] == 2) {
      cout << i << endl;
      return 0;
    }
  }

  if (a[0] < b[0]) {
    cout << a[0] * 10 + b[0] << endl;
  } else {
    cout << b[0] * 10 + a[0] << endl;
  }

  return 0;

}