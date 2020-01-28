#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  // [top, right, bottom, left]
  vector<int> size = {n, m, 0, 0};

  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
    for (int j = 0; j < m; j++) {
      if (s[i][j] == '*') {
        size[0] = min(size[0], i);
        size[1] = min(size[1], j);
        size[2] = max(size[2], i);
        size[3] = max(size[3], j);
      }
    }
  }

  for (int i = size[0]; i <= size[2]; i++) {
    for (int j = size[1]; j <= size[3]; j++) {
      cout << s[i][j];
    }
    cout << endl;
  }

}
