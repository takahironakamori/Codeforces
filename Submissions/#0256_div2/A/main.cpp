#include <bits/stdc++.h>
using namespace std;

int main() {

  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  int b1, b2, b3;
  cin >> b1 >> b2 >> b3;
  int n;
  cin >> n;

  int a = ceil((double) (a1 + a2 + a3) / 5);
  int b = ceil((double) (b1 + b2 + b3) / 10);

  if ((a + b) <= n) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  
}