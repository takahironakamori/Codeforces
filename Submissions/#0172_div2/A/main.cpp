#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int v = (int) s[0];
  if (90 < v) {
    s[0] = char(v - 32);
  }

  cout << s << endl;

}