#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int d1, d2;
  cin >> d1 >> d2;

  if (d1 == d2) {
    cout << d1 * 10 << " " << d1 * 10 + 1 << endl;  
  } else if (d2 < d1 || 1 < abs(d2 - d1)) {
    if (d1 == 9 && d2 == 1) {
      cout << 9 << " " << 10 << endl; 
    } else {
      cout << -1 << endl;
    } 
  } else {
    cout << d1 << " " << d2 << endl; 
  }

}