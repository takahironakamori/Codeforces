#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  int m = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    m = max(m, a[i]);
  }

  int answer = 0;
  for (int i = 0; i < n; i++) {
    answer += abs(m - a[i]);
  }

  cout << answer << endl; 

}