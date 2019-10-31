#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  if (n % 2 == 0) {
    cout << a[n/2-1] << endl;
  } else {
    cout << a[n/2] << endl;
  }

}