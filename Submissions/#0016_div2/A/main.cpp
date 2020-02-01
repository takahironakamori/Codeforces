#include <bits/stdc++.h>
using namespace std;


int main() {

  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  string answer = "YES";

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m - 1; j++) {
      if (s[i][j] != s[i][j + 1]) {
        answer = "NO";
        break;
      }
    }
    if (answer == "NO"){
      break;
    }
  }

  if (answer == "YES") {
    for (int i = 1; i < n - 1; i++) {
      if (s[i - 1][0] == s[i][0] || s[i][0] == s[i + 1][0]) {
        answer = "NO";
        break;
      }
    }
  }

  cout << answer << endl;

  return 0;

}
