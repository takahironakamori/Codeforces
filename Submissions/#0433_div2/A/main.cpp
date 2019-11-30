#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}

int main() {

  long n;
  cin >> n;

  int answer = 0;
  double v = 0;

  for (int i = 1; i <= n / 2; i++) {
    long g = gcd(i, n - i);
    if (g == 1) {
      if (v < (double) i / (n - i)) {
        v = (double) i / (n - i);
        answer = i;
      }
    }
  }

  cout << answer << " " << n - answer << endl;

}