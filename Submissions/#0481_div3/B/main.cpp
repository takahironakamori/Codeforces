#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string s;
  cin >> s;

  int answer = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'x') {
      count++;
    } else {
      if (2 < count) {
        answer += count - 2;
      }
      count = 0;
    }
  }

  if (2 < count) {
    answer += count - 2;
  }

  cout << answer << endl;

}