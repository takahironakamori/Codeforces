#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {

    long long l, r;
    cin >> l >> r;

    long long answer = 0;

    if (l % 2 == 1) {
      answer = (r - l) / 2;
    } else {
      answer = (r - l + 1) / 2;
    }
    answer = 0 - answer;

    if (l % 2 == 1) {
      answer -= l;
    }

    if (r % 2 == 0) {
      answer += r;
    }

    cout << answer << endl;

  }

}