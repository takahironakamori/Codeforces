#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int l, r;
    cin >> l >> r;
    int d = r / l;
    cout << l << " " << d * l << endl;
  }

}