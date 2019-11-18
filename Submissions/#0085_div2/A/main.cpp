#include <bits/stdc++.h>
using namespace std;

int main() {

  string a, b;
  cin >> a >> b;

  string A, B;

  for (int i = 0; i < a.size(); i++) {
    int a_ = (int) a[i];
    int b_ = (int) b[i];
    if (a_ <= 90) {
      A += char(a_ + 32);
    } else {
      A += char(a_);
    }
    if (b_ <= 90) {
      B += char(b_ + 32);
    } else {
      B += char(b_);
    }
  }

  if (A == B) {
    cout << 0 << endl;
  } else if (A < B) {
    cout << -1 << endl;
  } else {
    cout << 1 << endl;
  }

}