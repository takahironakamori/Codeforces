#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  string answer = "";
  bool flg = true;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ) {
      if(flg) {
        answer += s[i];
        flg = false;
      }
    } else {
      answer += s[i];
      flg = true;
    }
  }

  cout << answer << endl;

}