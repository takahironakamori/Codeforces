#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n;
  cin >> n;

  vector<int> a(n);
  long long sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  sort(a.begin(), a.end());

  int m;
  cin >> m;

  for (int i = 0; i < m; i++) {
    int q;
    cin >> q;
    cout << sum - a[n - q] << endl;
  }

}