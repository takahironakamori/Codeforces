#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<vector<int>> a(n, vector<int>(n));
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      
      if (a[i][j] == 1) {
        continue;
      }

      bool flg = false;
      
      for (int k = 0; k < n; k++){
        
        if (k == i) {
          continue;
        }

        for (int l = 0; l < n; l++){
          if (l == j) {
            continue;
          }

          if (a[i][j] == a[i][l] + a[k][j]) {
            flg = true;
            break;
          }

        }

        if (flg) {
          break;
        }

      }

      if (!flg) {
        cout << "No" << endl;
        return 0;
      }

    }
  }

  cout << "Yes" << endl;

}