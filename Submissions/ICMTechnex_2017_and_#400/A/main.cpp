#include <bits/stdc++.h>
using namespace std;

int main() {

  string f, s;
  cin >> f >> s;

  int n;
  cin >> n;

  cout << f << " " << s << endl;

  for (int i = 0; i < n; i++) {
    string f1, f2;
    cin >> f1 >> f2;
    if (f == f1) {
      f = f2;
    } else {
      s = f2;
    }
    cout << f << " " << s << endl;
  }

}