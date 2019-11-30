#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k, x;
  cin >> n >> k >> x;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < k; i++) {
    a[a.size() - 1 - i] = x;
  }

  int answer = 0;
  for (int i = 0; i < n; i++) {
    answer += a[i];
  }
  cout << answer << endl;

}