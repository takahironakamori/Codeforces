#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;
  
  string answer = "YES";
  
  // true:前の文字が子音 false:子音ではない
  bool flg = false;

  // true:前の文字がn false:nではない
  bool isN = false;

  for (int i = 0; i < s.size(); i++) {
    if (flg) {
      if (s[i] != 'a' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && s[i] != 'e') {
        if (!isN) {
          answer = "NO";
          break;
        }
      } else {
        flg = false;
      }
    } else {
      if (s[i] == 'a' || s[i] == 'o' || s[i] == 'u' || s[i] == 'i' || s[i] == 'e') {
        flg = false;
      } else {
        flg = true;
      }
    }
    if (s[i] == 'n') {
      isN = true;
    } else {
      isN = false;
    }
  }

  if (flg) {
    if (!isN) {
      answer = "NO";
    }
  }

  cout << answer << endl;

}