#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> num(1001);

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    num[a[i]]++;
  }

  int m;
  cin >> m;

  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    cin >> b[i];
    num[b[i]]++;
  }

  bool flg = false;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int c = a[i] + b[j];
      if (num[c] == 0) {
        cout << a[i] << " " << b[j] << endl;
        flg = true;
        break;
      }
    }
    if (flg) {
      break;
    }
  }

}