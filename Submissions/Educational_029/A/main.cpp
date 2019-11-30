#include <bits/stdc++.h>
using namespace std;

int main() {

  string x;
  cin >> x;

  int count = 0;
  for (int i = x.size() - 1; 0 <= i; i--) {
    if (x[i] == '0') {
      count++;
    } else {
      break;
    }
  }

  string x2 = x.substr(0, x.size() - count);

  string x3 = x2;
  reverse(x3.begin(),x3.end());

  if (x2 == x3) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}