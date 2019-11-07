#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> a(m);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
      int v;
      cin >> v;
      a[v-1]++;
    }
  }

  string answer = "YES";

  for (int i = 0; i < m; i++) {
    if (a[i] == 0) {
      answer = "NO";
      break;
    }
  }
  
  cout << answer << endl;

}