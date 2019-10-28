#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    v[p - 1] = i + 1;
  }

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }

  cout << endl;

}