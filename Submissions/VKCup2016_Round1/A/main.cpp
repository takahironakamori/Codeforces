#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, c;
  cin >> n >> c;

  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }

  int time = 0;
  int L = 0;
  int R = 0;

  for (int i = 0; i < n; i++) {
    time += t[i];
    L += max(0, p[i] - c * time);
  }

  time = 0;
  for (int i = n - 1; 0 <= i; i--) {
    time += t[i];
    R += max(0, p[i] - c * time);
  }

  if (R == L) {
    cout << "Tie" << endl;
  } else if (R < L) {
    cout << "Limak" << endl;
  } else {
    cout << "Radewoosh" << endl;
  }

}