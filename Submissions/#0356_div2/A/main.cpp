#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> t(5);
  int mx = 0;

  for (int i = 0; i < 5; i++) {
    cin >> t[i];
    mx += t[i];
  }

  int answer = mx;

  // 2 枚カードを抜き取る場合
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (t[i] == t[j]) {
        answer = min(answer, mx - t[i] * 2);
      }
    }
  }

  // 3 枚カードを抜き取る場合
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      for (int k = j + 1; k < 5; k++) {
        if (t[i] == t[j] && t[i] == t[k]) {
          answer = min(answer, mx - t[i] * 3);
        }
      }
    }
  }

  cout << answer << endl;

}