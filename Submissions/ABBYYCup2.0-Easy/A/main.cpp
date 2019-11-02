#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  int v;
  int answer = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> v;
      if (i == n / 2 || j == n / 2) {
        answer += v;
      } else if (i == j || i == n - 1 - j) {
        answer += v;
      }
    }
  }

  cout << answer << endl;

}