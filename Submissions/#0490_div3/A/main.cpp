#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, k;
  cin >> n >> k;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int answer = 0;
  bool stop = false;

  for (int i = 0; i < n; i++) {
    if (a[i] <= k) {
      answer++;
    } else {
      stop = true;
      break;
    }
  }

  if (stop) {
    for (int i = n - 1; 0 <= i; i--) {
      if (a[i] <= k) {
        answer++;
      } else {
        break;
      }
    }
  }
  
  cout << answer << endl;

}