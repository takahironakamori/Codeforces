#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {

    int n;
    cin >> n;

    bool toContinue = true;
    while (toContinue) {

      bool ok = true;
      int current = n;
      
      while (0 < current) {
        if (ok && current % 3 == 2) {
          ok = false;
        }
        current /= 3;
      }

      if (ok) {
        break;
      }
      n++;

    }

    cout << n << endl;

  }

}