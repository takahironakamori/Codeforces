#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> c(n);
  vector<int> a(m);

  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  int answer = 0;
  int currentM = 0;
  int currentN = 0;

  while (currentN < n && currentM < m) {
    if (c[currentN] <= a[currentM]) {
      answer++;
      currentM++;
      currentN++;
    } else {
      currentN++;
    }
  }
  
  cout << answer << endl;

}