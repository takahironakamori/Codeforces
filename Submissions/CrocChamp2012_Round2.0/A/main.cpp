#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<string> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int r = 0;
  int c = 0;

  for (int i = 0; i < n; i++) {
    int acount = 0;
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '*') {
        acount++;
      }
    }
    if (acount == 1) {
      r = i;
    }
  }

  for (int i = 0; i < m; i++) {
    int acount = 0;
    for (int j = 0; j < n; j++) {
      if (v[j][i] == '*') {
        acount++;
      }
    }
    if (acount == 1) {
      c = i;
    }
  }

  cout << r + 1 << " " <<  c + 1 << endl;

}