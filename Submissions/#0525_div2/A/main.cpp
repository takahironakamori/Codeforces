#include <bits/stdc++.h>
using namespace std;

int main() {

  int x;
  cin >> x;

  if (x == 1) {
    cout << -1 << endl;
  } else {
    int answer = x - x % 2;
    cout << answer << " " << 2 << endl;
  }

}