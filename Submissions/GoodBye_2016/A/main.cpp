#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  int limit = 240 - k;

  int answer = 0;
  int t = 0;
  
  for(int i = 1; i <= n; i++) {
    t += 5 * i;
    if (limit < t) {
      break;
    }
    answer = i;
  }
  
  cout << answer << endl;

}