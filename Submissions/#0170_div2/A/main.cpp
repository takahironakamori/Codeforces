#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }

  int s, t;
  cin >> s >> t;

  int answer = 0;
  int d1 = 0;
  int d2 = 0;
  
  if (t < s) {
    for (int i = s - 1; i < n; i++) {
      d1 += d[i];
    }
    for (int i = 0; i < t - 1; i++) {
      d1 += d[i];
    }
    for (int i = t - 1; i < s - 1; i++) {
      d2 += d[i];
    }
    answer = min(d1, d2);
  } else if (s == t) {
    answer = 0;
  } else {
    for (int i = s - 1; i < t - 1; i++) {
      d1 += d[i];
    }
    for (int i = t - 1; i < n; i++) {
      d2 += d[i];
    }
    for (int i = 0; i < s - 1; i++) {
      d2 += d[i];
    }
    answer = min(d1, d2);
  }

  cout << answer << endl;

}