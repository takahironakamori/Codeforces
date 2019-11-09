#include <bits/stdc++.h>
using namespace std;

int main() {

  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;

  int ma = max(x1, x2);
  int mi = min(x1, x2);

  ma = max(ma, x3);
  mi = min(mi, x3);
  
  cout << ma - mi << endl;

}