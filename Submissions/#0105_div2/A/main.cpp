#include <bits/stdc++.h>
using namespace std;

int main() {

  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;

  int answer = 0;
    
  for (int i = 1; i <= d; i++) {
    if (i % k == 0) {
      answer++;
    } else if (i % l == 0) {
      answer++;
    } else if (i % m == 0) {
      answer++;
    } else if (i % n == 0) {
      answer++;
    }
  }

  cout << answer << endl;

}