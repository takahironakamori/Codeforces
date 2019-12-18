#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n;
  cin >> n;

  vector<long long> d(n);
  long long count = 0;

  for (int i = 0; i < n; i++) {
    cin >> d[i];
    count += d[i];
  }

  sort(d.begin(), d.end());

  long long count2 = 0;

  for (int i = 0; i < n / 2; i++) {
    count2 += d[i];
  }

  cout << count2 * count2 + (count - count2) * (count - count2) << endl;
  
}