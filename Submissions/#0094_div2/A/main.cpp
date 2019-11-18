#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int even = 0;
  int odd = 0;

  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      even++;
    } else {
      odd++;
    }
  }

  if (odd % 2 == 0) {
    cout << even << endl;
  } else {
    cout << odd << endl;
  }

}