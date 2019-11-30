#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  int answer = 1000;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (k % a == 0) {
      answer = min(answer, k / a);
    }
  }

  cout << answer << endl;

}