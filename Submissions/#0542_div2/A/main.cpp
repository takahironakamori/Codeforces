#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int n;
  cin >> n;
 
  int count1 = 0;
  int count2 = 0;

  for (int i = 0; i < n; i++) {
 
    int a;
    cin >> a;

    if (0 < a) {
      count1++;
    }

    if (a < 0) {
      count2++;
    }
 
  }

  if (count2 <= count1) {

    if (ceil((double)n / 2) <= count1) {
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
 
  } else {

    if (ceil((double)n / 2) <= count2) {
      cout << -1 << endl;
    } else {
      cout << 0 << endl;
    }

  }
}