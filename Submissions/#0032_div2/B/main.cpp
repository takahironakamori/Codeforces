#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  string answer = "";
 
  bool flg = false;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '.') {
      if (flg == false) {
        answer += "0";
      } else {
        answer += "1";
        flg = false;
      }
    } else if (s[i] == '-') {
      if (flg == false) {
        flg = true;
      } else {
        answer += "2";
        flg = false;
      }
    }
  }

  cout << answer << endl;

}