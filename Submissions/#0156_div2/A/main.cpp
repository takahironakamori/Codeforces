#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // [0]chest [1]biceps [2]back
  vector<int> e(3);

  for (int i = 0; i < n; i++) {
    e[i % 3] += a[i];
  }

  if (e[0] < e[1]) {
    if (e[1] < e[2]) {
      cout << "back" << endl;
    } else {
      cout << "biceps" << endl;
    }
  } else {
    if (e[0] < e[2]) {
      cout << "back" << endl;
    } else {
      cout << "chest" << endl;
    }
  }

}