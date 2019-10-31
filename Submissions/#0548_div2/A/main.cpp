#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  int answer = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] % 2 == 0) {
      answer += i + 1;
    }
  }

  cout << answer << endl;

}