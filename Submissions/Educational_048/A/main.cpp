#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  long long current = 0;
  long long old = 0;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    current += a;
    cout << current / m - old << " ";
    old = current / m;
  }

  cout << endl;

}