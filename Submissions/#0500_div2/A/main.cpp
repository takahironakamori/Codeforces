#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int x = 0;
  int y = 0;

  for (int i = 0; i < n; i++) {
    int x_;
    cin >> x_;
    x += x_;
  }

  for (int i = 0; i < n; i++) {
    int y_;
    cin >> y_;
    y += y_;
  }

  if (y <= x) {
    cout << "YES" << endl;
  } else { 
    cout << "NO" << endl;
  }

}