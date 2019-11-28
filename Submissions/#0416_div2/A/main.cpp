#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b;
  cin >> a >> b;

  int count = 1;
  bool flg = true;
  string answer = "";

  while (flg) {
    if (count & 1) {
      a -= count;
      if (a < 0) {
        answer = "Vladik";
        flg = false;
      }
    } else {
      b -= count;
      if (b < 0) {
        answer = "Valera";
        flg = false;
      }
    }
    count++;
  }

  cout << answer << endl;

}