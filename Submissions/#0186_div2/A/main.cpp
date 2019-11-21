#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  if (0 <= n) {
    cout << n << endl;
  } else {
    int a1 = n / 10;
    a1 = a1 - (a1 % 10) + (n % 10);
    int a2 = n / 10;
    cout << max(a1, a2) << endl;
  }

}