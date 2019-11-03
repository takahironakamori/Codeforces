#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, t;
  cin >> s >> t;

  int answer = 0;
  for (int i = 0; i < t.size(); i++) {
    if (s[answer] == t[i]) {
      answer++;
    }
  }

  cout << answer + 1 << endl;

}