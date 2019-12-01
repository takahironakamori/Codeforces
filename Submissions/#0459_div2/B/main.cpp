#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  map<string, string> mp;

  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    b += ";";
    mp[b] = a;
  }

  for (int i = 0; i < m; i++) {
    string c, d;
    cin >> c >> d;
    cout << c << " " << d << " #" << mp[d] << endl;
  }

}