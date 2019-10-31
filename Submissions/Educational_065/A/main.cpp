#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    string answer = "NO";
    for (int j = 0; j < n; j++) {
      if (s[j] == '8' && j + 10 < n) {
        answer = "YES";
        break;
      }
    }
    cout << answer << endl;
  }

}