#include <bits/stdc++.h>
using namespace std;

int main() {
 
  vector<int> abc(3);
  cin >> abc[0] >> abc[1] >> abc[2];

  int d;
  cin >> d;

  sort(abc.begin(), abc.end());
  
  int ab = abc[0] + d - abc[1];
  int bc = abc[0] + d * 2 - abc[2];

  if (max(ab, bc) < 0) {
    cout << 0 << endl;
  } else {
    cout << max(ab, bc) << endl;
  }

}