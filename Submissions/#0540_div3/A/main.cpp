#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {

    long long n, a, b;
    cin >> n >> a >> b;

    long long answer = 0;

    if (a * 2 < b) {
      answer = n * a;
    } else {
      answer = n / 2 * b + (n % 2) * a;
    }

    cout << answer << endl;
  
  }

}