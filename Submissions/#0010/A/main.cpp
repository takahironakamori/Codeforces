#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n, P1, P2, P3, T1, T2;
  cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;
 
  vector<int> l(n);
  vector<int> r(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
  }

  for (int i = 0; i < n; i++) {
    if (i != n - 1) {
      r[i] += min(T1, l[i + 1] - r[i]);
    }
  }

  int answer = 0;

  for (int i = 0; i < n; i++) {
    answer += (r[i] - l[i]) * P1;
    if (i != n - 1) {
      if (T2 < (l[i + 1] - r[i])) {
        answer += T2 * P2;
        answer += (l[i + 1] - r[i] - T2) * P3;
      } else if (0 < (l[i + 1] - r[i])){
        answer += min(T2, l[i + 1] - r[i]) * P2;
      }
    }
  }

  cout << answer << endl;
 
}