#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> left(2);
  vector<int> right(2);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    left[l]++;
    right[r]++;
  }

  cout << min(left[0],left[1]) + min(right[0],right[1]) << endl;

}