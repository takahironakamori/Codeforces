#include <bits/stdc++.h>
using namespace std;

int main() {

  int l, r, a;
  cin >> l >> r >> a;

  int answer = 0;

  if (r < l) {
    swap(l,r);
  }

  if (l + a <= r) {
    answer = (l + a) * 2;
  } else {
    answer = (l + r + a) / 2 * 2;
  }

  cout << answer << endl;

}