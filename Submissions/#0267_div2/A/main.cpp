#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int answer = 0;
  
  for (int i = 0; i < n; i++) {
    int p, q;
    cin >> p >> q;
    if (2 <= q - p) {
      answer++;
    }
  }

  cout << answer << endl;

}