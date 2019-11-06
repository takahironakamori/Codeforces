#include <bits/stdc++.h>
using namespace std;

int main() {

  int s;
  cin >> s;

  int c = s / 2;

  for (int i = 0; i < s; i++) {
    for (int j = 0; j < s; j++) {
      int d = c - abs(i - c);
      if (abs(j - c) <= d) {
        cout << "D";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }

}