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

  int x, y;
  cin >> x >> y;

  string answer = "NO";

  for (int i = x + 1; i <= y; i++) {
    if (is_prime(i)) {
      if (i == y) {
        answer = "YES";
      }
      break;
    }
  }

  cout << answer << endl;

}