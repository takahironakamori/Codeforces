#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  long long answer = 0;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (answer < x + y) {
      answer = x + y;
    }
  }

  cout << answer << endl;

}