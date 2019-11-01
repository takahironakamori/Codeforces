#include <bits/stdc++.h>
using namespace std;

int main() {

  int x, y, z;
  cin >> x >> y >> z;

  if (x == y) {
    if (0 < z) {
      cout << "?" << endl;
    } else {
      cout << 0 << endl;
    }
  } else if (y < x) {  
    if (x - y <= z) {
      cout << "?" << endl;
    } else {
      cout << "+" << endl;
    }
  } else {
    if (y - x <= z) {
      cout << "?" << endl;
    } else {
      cout << "-" << endl;
    }
  }

}