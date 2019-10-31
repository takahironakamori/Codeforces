#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> l(n);
  vector<int> r(n);
  for (int i = 0; i < n; i++) {
    cin >> l[i] >> r[i];
  }

  int k;
  cin >> k;

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (l[i] <= k && k <= r[i]){
      count = i;
    }
  }

  cout << n - count << endl;

}