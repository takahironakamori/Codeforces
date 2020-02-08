#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m, k;
  cin >> n >> m >> k;

  vector<int> d(m);
  for (int i = 0; i < m; i++) {
    cin >> d[i];
  }

  vector<int> h(k);
  for (int i = 0; i < k; i++) {
    cin >> h[i];
  }

  vector<int> sum(m);
  for (int i = 0; i < m; i++) {
    int current = 0;
    for (int j = 0; j < k; j++) {
      if (h[j] % d[i] == 0) {
        current++;
      }
    }
    sum[i] = current;
  }

  int minSum = 1000000000;
  for (int i = 0; i < m; i++) {
    minSum = min(minSum, sum[i]);
  }

  int answer = 0;
  for (int i = 0; i < m; i++) {
    if (minSum == sum[i]) {
      answer++;
    }
  }

  cout << answer << endl;

  int flg = true;
  for (int i = 0; i < m; i++) {
    if (minSum == sum[i]){
      if (flg) {
        flg = false;
        cout << i + 1;
      } else {
        cout << " " << i + 1;
      }
    }
  }
  cout << endl;

  return 0;

}
