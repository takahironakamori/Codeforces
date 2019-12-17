#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n;
  cin >> n;
 
  vector<int> x(n);
  int count = 0;
  
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] % 2 == 0) {
      count++;
    }
  }

  cout << min(count, n - count) << endl;
 
}