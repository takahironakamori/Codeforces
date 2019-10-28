#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int q;
  cin >> q;

  vector<int> sum(q);
  for (int i = 0; i < q; i++) {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      sum[i] += a;
    }
    cout << (int) ceil((double) sum[i] / n) << endl;
  }

}