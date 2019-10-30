#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> s(m);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    for (int j = l; j <= r; j++) {
      s[j - 1]++;
    }
  }

  int count = 0;
  for (int i = 0; i < m; i++) {
    if (s[i] == 0 ) {
      count++;
    }
  }

  cout << count << endl;

  for (int i = 0; i < m; i++) {
    if (s[i] == 0 ) {
      cout << i + 1 << " ";
    }
  }

  cout << endl;

}