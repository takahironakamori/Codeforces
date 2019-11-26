#include <bits/stdc++.h>
using namespace std;

bool is_prime(long N) {
  for (long i = 2; i * i <= N; i++) {
    if (N % i == 0) {
      return false;
    }
  }
  return N != 1;
}

int main() {

  int n;
  cin >> n;

  for (int i = 1; i <= 1000; i++) {
    bool flg = is_prime(n * i + 1);
    if (flg == false) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;

}