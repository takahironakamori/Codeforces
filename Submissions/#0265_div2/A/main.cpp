#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  string s;
  cin >> s;

  int answer = s.size() - 1;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '0') {
      answer = i;
      break;
    }
  }

  cout << answer + 1 << endl;

}