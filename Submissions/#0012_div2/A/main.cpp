#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<string> m(3);
  for (int i = 0; i < 3; i++) {
    cin >> m[i];
  }

  vector<char> a = {m[0][0],m[0][1],m[0][2],m[1][2],m[2][2]};
  vector<char> b = {m[2][2],m[2][1],m[2][0],m[1][0],m[0][0]};

  if (a == b) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}