#include <bits/stdc++.h>
using namespace std;

int main() {

  string s, a, b;
  cin >> s >> a >> b;

  int ba = false;
  int ab = false;

  int a1 = s.find(a);
  string s1 = s.substr(a1 + a.size(), s.size() - a.size() + 1);
  int b1 = s1.find(b);

  if (0 <= a1 && 0 <= b1) {
    ab = true;
  }

  //cout << s1 << " " << b1 << endl;

  reverse(s.begin(), s.end());

  int a2 = s.find(a);
  string s2 = s.substr(a2 + a.size(), s.size() - a.size() + 1);
  int b2 = s2.find(b);

  if (0 <= a2 && 0 <= b2) {
    ba = true;
  }

  if (ab && ba) {
    cout << "both" << endl;
  } else if (ab) {
    cout << "forward" << endl;
  } else if (ba) {
    cout << "backward" << endl;
  } else {
    cout << "fantasy" << endl;
  }

}
