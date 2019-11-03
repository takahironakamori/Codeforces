#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (10 < s.size()) {
      int c = s.size() - 2;
      cout << s[0] + to_string(c) + s[c+1] << endl;
    } else {
      cout << s << endl;
    }
  }

}