#include <bits/stdc++.h>
using namespace std;

int main() {

  long long a, b, c;
  cin >> a >> b >> c;

  long long answer = 0;

  answer += c * 2;

  if (1 < a - b) {
    cout << answer + b + b + 1 << endl;
  } else if (1 < b - a) {
    cout << answer + a + a + 1 << endl;
  } else {
    cout << answer + a + b << endl;
  }

}