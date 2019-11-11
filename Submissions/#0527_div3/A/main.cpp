#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, k;
    cin >> n >> k;
    int current = 0;
    for (int j = 0; j < n; j++) {
      cout << char(97 + current);
      if (k - 1 == current) {
        current = 0;
      } else {
        current++;
      }
    }
    cout << endl;
  }

}