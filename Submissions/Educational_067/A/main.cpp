#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int T;
  cin >> T;

  while (0 < T) {

    int n, s, t;
    cin >> n >> s >> t;

    cout << max(n - s, n - t) + 1 << endl;

    T--;

  }

}