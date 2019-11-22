#include <bits/stdc++.h>
using namespace std;

int main() {

  int p, n;
  cin >> p >> n;

  int answer = -1;

  vector<int> h(p);

  fill(h.begin(), h.end(), -1);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (h[x % p] == x % p) {
      if (answer == -1) {
        answer = i + 1;
      }
    } else {
      h[x % p] = x % p;
    }
  }

  cout << answer << endl;

}