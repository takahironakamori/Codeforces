#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int answer = 0;
  for (int i = 0; i < n - 1; i += 2) {
    answer += a[i+1] - a[i];
  }

  cout << answer << endl;

}