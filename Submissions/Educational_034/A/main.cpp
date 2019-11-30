#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {

    int x;
    cin >> x;
    
    bool flg = false;
    
    for (int j = 0; j < 100 / 3; j++) {
      for (int k = 0; k < 100 / 7; k++) {
        if ((3 * j) + (7 * k) == x) {
          flg = true;
        }
      }
      if (flg){
        break;
      }
    }

    if (flg) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    
  }

}