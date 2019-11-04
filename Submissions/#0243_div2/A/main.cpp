#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, s;
  cin >> n >> s;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int w = 0;
  for (int i = 0; i < n - 1; i++) {
    w += a[i];
  }

  if (w <= s) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  
}