#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n + 2);

  for (int i = 1; i < n + 1; i++) {
    cin >> a[i];
  }

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    a[x - 1] += y - 1; 
    a[x + 1] += a[x] - y;
    a[x] = 0;
  }

  for (int i = 1; i < n+1; i++) {
    cout << a[i] << endl;
  }

}