#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  string answer = "NO";

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
      answer = "YES";
      break;
    }
  }

  cout << answer << endl;

}