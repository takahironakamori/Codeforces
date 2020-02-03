#include <bits/stdc++.h>
using namespace std;

bool is_prime(int N) {
  for (int i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return N != 1;
}

int main() {

  long n, k;
  cin >> n >> k;

  int answer = 0;

  vector<int> p;

  for (int i = 1; i <= n; i++) {
    if (is_prime(i)) {
      p.clear();
      for (int j = 1; j <= i; j++) {
        if (is_prime(j)) {
          p.push_back(j);
        }
      }
      if (1 < p.size()) {
        for (int j = 0; j < p.size() - 1; j++) {
          if (p[j] + p[j + 1] + 1 == i) {
            answer++;
          }
        }
      }
    }
  }

  if (k <= answer) {
    cout << "YES" <<  endl;
  } else {
    cout << "NO" <<  endl;
  }

  return 0;

}
