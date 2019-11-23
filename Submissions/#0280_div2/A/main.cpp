#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 1;
  int v = 1;
  
  while (0 < n) {
    n -= v;
    v = (answer + 1) * (answer + 2) / 2;
    if (v <= n) {
      answer++;
    } else {
      n = 0;
    }
  }
  
  cout << answer << endl;

}