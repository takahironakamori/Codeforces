#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int mn = 1000;
  vector<int> answer(2);

  for (int i = 0; i < n; i++) {
    int abs_ = 0;
    if (i != n - 1) {
      abs_ = abs(a[i] - a[i + 1]);
    } else {
      abs_ = abs(a[i] - a[0]);
    }
    if (abs_ < mn) {
      mn = abs_;
      if (i != n - 1) {
        answer[0] = i;
        answer[1] = i + 1;
      } else {
        answer[0] = i;
        answer[1] = 0;
      }
    }
  }

  cout << answer[0] + 1 << " " << answer[1] + 1 << endl;

  return 0;

}
