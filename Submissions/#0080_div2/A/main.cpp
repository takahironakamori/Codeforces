#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  if (n < 11) {
    cout << 0 << endl;
  } else if (n < 20) {
    cout << 4 << endl;
  } else if (n < 21) {
    cout << 15 << endl;
  } else if (n < 22) {
    cout << 4 << endl;
  } else {
    cout << 0 << endl;
  }

}