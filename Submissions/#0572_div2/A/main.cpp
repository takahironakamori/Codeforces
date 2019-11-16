#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string k;
  cin >> k;

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (k[i] == '0') {
      count++;
    } else {
      count--;
    }
  }

  if (count == 0) {
    cout << 2 << endl;
    cout << k.substr(0, n - 1) << " " << k.substr(n - 1) << endl;
  } else {
    cout << 1 << endl;
    cout << k << endl;
  }

}