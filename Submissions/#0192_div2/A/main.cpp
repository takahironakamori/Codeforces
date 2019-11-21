#include <bits/stdc++.h>
using namespace std;

int main() {

  int r, c;
  cin >> r >> c;

  vector<string> a(r);
  for (int i = 0; i < r; i++) {
    cin >> a[i];
  }

  int answer = 0;
  int countR = 0;
  int countC = 0;

  for (int i = 0; i < r; i++) {
    string a_ = a[i];
    bool flg = true;
    for (int j = 0; j < c; j++) {
      if (a_[j] == 'S') {
        flg = false;
        break;
      }
    }
    if (flg) {
      countR++;
      answer += c;
    }
  }
  
  for (int i = 0; i < c; i++) {
    bool flg = true;
    for (int j = 0; j < r; j++) {
      string a_ = a[j];
      if (a_[i] == 'S') {
        flg = false;
        break;
      }
    }
    if (flg) {
      countC++;
      answer += r;
    }
  }

  cout << answer - (countR * countC) << endl;

}