#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  
  vector<int> t(n+2);
  for (int i = 1; i <= n; i++) {
    cin >> t[i];
  }

  t[n + 1] = 91;

  for (int i = 1; i <= n + 1; i++) {
    if (t[i - 1] + 15 < t[i]) {
      cout << t[i - 1] + 15 << endl;
      return 0;
    }
  }

  cout << 90 << endl;
  return 0;
  
}