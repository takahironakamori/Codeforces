#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int answer = 0;

  vector<int> count(n);
  count[0] = 1;
  for (int i = 1; i < n; i++) {
    if (a[i-1] < a[i]) {
      count[i] = count[i - 1] + 1;
    } else {
      answer = max(answer, count[i - 1]);
      count[i] = 1;
    } 
  }
  answer = max(answer, count[n - 1]);
  
  cout << answer << endl;

}