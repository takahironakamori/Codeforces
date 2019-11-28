#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m, k;
  cin >> n >> m >> k;

  int answer = 10000;

  for (int i = 1; i <= n; i++) {

    int a;
    cin >> a;

    if (a != 0 && a <= k) {
      answer = min(answer, abs(m - i) * 10);
    }

  }

  cout << answer << endl;

}