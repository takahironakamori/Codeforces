#include <bits/stdc++.h>
using namespace std;

int main() {

  int a, b, c, n;
  cin >> a >> b >> c >> n;

  int answer = 0;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (b < x && x < c) {
      answer++;
    }
  }

  cout << answer << endl;

}