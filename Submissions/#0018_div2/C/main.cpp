#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> sum(n);
  for (int i = 0; i < n; i++) {
    int v_;
    cin >> v_;
    if (i == 0) {
      sum[i] = v_;
    } else {
      sum[i] = v_ + sum[i-1];
    }
  }

  int answer = 0;
  for (int i = 0; i < n - 1; i++) {
    if (sum[n - 1] - sum[i] == sum[i]) {
      answer++;
    }
  }

  cout << answer << endl;

  return 0;

}
