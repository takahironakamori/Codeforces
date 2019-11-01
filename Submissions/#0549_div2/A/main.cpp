#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int l = 0;
  int r = 0;

  vector<int> d(n);

  for (int i = 0; i < n; i++) {
    cin >> d[i];
    if (d[i] == 0) {
      l++;
    } else {
      r++;
    }
  }

  for (int i = 0; i < n; i++) {
    if (d[i] == 0) {
      l--;
      if (l == 0) {
        cout << i + 1 << endl;
        break;
      }
    } else {
      r--;
      if (r == 0) {
        cout << i + 1 << endl;
        break;
      }
    }
  }

}