#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, t;
  cin >> s >> t;

  string answer = "YES";

  int l = s.size();
  int m = t.size();

  if (l != m) {
    answer = "NO";
  }

  if (answer == "YES") {
    for (int i = 0; i < l; i++) {
      if (s[i] != t[l - 1 - i]) {
        answer = "NO";
        break;
      }
    }
  }

  cout << answer << endl;

}