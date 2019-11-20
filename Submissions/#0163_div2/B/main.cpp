#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, t;
  cin >> n >> t;

  string s;
  cin >> s;

  for (int i = 0; i < t; i++) {
    bool flg = false;
    for (int j = 0; j < n - 1; j++) {
      if (s[j] == 'B' && s[j + 1] == 'G' && flg == false) {
        char s_ = s[j];
        s[j] = s[j + 1];
        s[j + 1] = s_;
        flg = true;
      } else {
        flg = false;
      }
    }
  }

  cout << s << endl;

}