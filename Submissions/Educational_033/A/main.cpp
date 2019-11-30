#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  string answer = "YES";

  // participate
  int p1 = 1;
  int p2 = 2;
  
  // spectating
  int s = 3;

  for (int i = 0; i < n; i++) {
    if (a[i] == s) {
      answer = "NO";
      break;
    } else {
      if (a[i] == p1) {
        swap(p2, s);
      } else {
        swap(p1, s);
      }
    }
  }
  
  cout << answer << endl;

}