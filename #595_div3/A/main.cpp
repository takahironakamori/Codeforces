#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int t;
  cin >> t;
 
  vector<int> n(t);
  vector<int> p(t);
 
  vector<int> m(t);
  vector<int> q(t);
 
  for (int i = 0; i < t; i++) {
    cin >> n[i];
    for (int j = 0; j < n[i]; j++) {
      int v;
      cin >> v;
      if (v % 2 == 0) {
        p[i]++;
      }
    }
    cin >> m[i];
    for (int j = 0; j < m[i]; j++) {
      int v;
      cin >> v;
      if (v % 2 == 0) {
        q[i]++;
      }
    }
  }
 
  for (int i = 0; i < t; i++) {
    long long a1 = (long long) p[i] * (long long) q[i];
    long long a2 = (long long) (n[i] - p[i]) * (long long) (m[i] - q[i]);
    cout << a1 + a2 << endl;
  }
 
}