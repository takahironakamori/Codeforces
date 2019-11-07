#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), std::greater<int>());

  int answer = 0;
  for (int i = 0; i < n; i++) {
    if (0 < m) {
      answer++;
      m -= a[i];
    }
  }
  
  cout << answer << endl;

}