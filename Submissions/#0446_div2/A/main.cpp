#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    sum += a;
  }

  vector<long long> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(b.begin(), b.end());

  string answer = "YES";

  if (n != 2) {
    if ((b[n - 1] + b[n - 2]) < sum) {
      answer = "NO";
    }
  }
  
  cout << answer << endl;

}