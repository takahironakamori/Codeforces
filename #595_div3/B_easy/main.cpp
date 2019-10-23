#include <bits/stdc++.h>
using namespace std;

int main() {

  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {

    int n;
    cin >> n;

    vector<int> p(n);
    for (int j = 0; j < n; j++) {
      cin >> p[j];
      p[j]--;
    }

    for (int j = 0; j < n; j++) {
      int count = 1;
      int k = p[j];
      while (k != j) {
        count++;
        k = p[k];
      }
      cout << count << " ";
    }

    cout  << endl;

  }

}