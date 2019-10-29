#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<vector<int>> v(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int l = 0; l < n; l++) {
      if (i == 0 || l == 0) {
        v[i][l] = 1;
      } else {
        v[i][l] = v[i][l-1] + v[i-1][l];
      }
    }
  }
  
  cout << v[n-1][n-1] << endl;

}