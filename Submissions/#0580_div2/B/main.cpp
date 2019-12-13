#include <bits/stdc++.h>
using namespace std;

int main() {
 
  long long n;
  cin >> n;

  vector<int> a(n);
  long long minus = 0;
  long long zero = 0;
  long long answer = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 0) {
      zero++;
    } else if (a[i] < 0) {
      minus++;
      if (a[i] != -1) {
        answer += abs(a[i] + 1);
      }
    } else {
      if (a[i] != 1) {
        answer += abs(a[i] - 1);
      }
    }
  }

  if (minus % 2 == 1) {
    if (zero == 0) {
      answer += 2;
    }
  }

  answer += zero;

  cout << answer << endl;

}