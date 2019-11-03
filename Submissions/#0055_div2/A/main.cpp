#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  string u = "";
  string l = "";

  int ucount = 0;
  
  for (int i = 0; i < s.size(); i++) {
    int v = (int) s[i];
    if (v <= 90) {
      ucount++;
      u += char(v);
      l += char(v + 32);
    } else {
      u += char(v - 32);
      l += char(v);
    }
  }

  if (ucount <= s.size() / 2) {
    cout << l << endl;
  } else {
    cout << u << endl;
  }

}