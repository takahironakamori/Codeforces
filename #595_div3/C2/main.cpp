#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    
    long long n;
    cin >> n;

    vector<int> vals;
    int pos2 = -1;
    while (0 < n) {
      vals.push_back(n % 3);
      if (vals.back() == 2) {
        pos2 = int(vals.size()) - 1;
      }
      n /= 3;
    }

    vals.push_back(0);
    
    if (pos2 != -1) {
      int pos0 = find(vals.begin() + pos2, vals.end(), 0) - vals.begin();
      vals[pos0] = 1;
      for (int j = pos0 - 1; 0 <= j; j--) {
        vals[j] = 0;
      }
    }

    long long ans = 0;
    long long c = 1;
    
    for (int j = 0; j < int(vals.size()); j++) {
      ans += c * vals[j];
      c *= 3;
    }
    
    if (vals.back() == 1) {
      ans = c / 3;
    }

    cout << ans << endl;

  }

  return 0;

}