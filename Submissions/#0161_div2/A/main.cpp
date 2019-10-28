#include <bits/stdc++.h>
using namespace std;

int main() {

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int v;
      cin >> v;
      if (v == 1) {
        cout << abs(j - 2) + abs(i - 2) << endl;
      }
    }
  }

}