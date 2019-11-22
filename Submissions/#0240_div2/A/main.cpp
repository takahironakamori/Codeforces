#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  
  vector<int> b(n + 1);
  for (int i = 0; i < m; i++) {
    int k;
    cin >> k;
    for (int j = k; j < n + 1; j++) {
      if (b[j] == 0) {
        b[j] = k;
      }
    }
  }

  for (int i = 1; i < n + 1; i++) {
    cout << b[i] << " ";
  }

  cout << endl;

}