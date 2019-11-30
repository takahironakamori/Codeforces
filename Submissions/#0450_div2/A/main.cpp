#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int count1 = 0;
  int count2 = 0;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (0 < x) {
      count1++;
    } else {
      count2++;
    }
  }

  if ((n - 1) <= count1 || (n - 1) <= count2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}