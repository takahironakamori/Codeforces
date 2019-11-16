#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  int nO = 0;
  int nE = 0;
  int mO = 0;
  int mE = 0;

  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    if (v % 2 == 1) {
      nO++;
    } else {
      nE++;
    }
  }

  for (int i = 0; i < m; i++) {
    int v;
    cin >> v;
    if (v % 2 == 1) {
      mO++;
    } else {
      mE++;
    }
  }

  int answer = min(nO, mE) + min(nE, mO);

  cout << answer << endl;

}