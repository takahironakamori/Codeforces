#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    s[i] = a + b + c + d;
  }

  int count = 0;
  for (int i = 1; i < n; i++) {
    if (s[0] < s[i]) {
      count++;
    }
  }

  cout << count + 1 << endl;

}