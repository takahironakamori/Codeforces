#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  string v;
  cin >> v;

  if (v[0] == 'S' && v[n-1] == 'F') {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}