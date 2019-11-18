#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> d(n);
  for (int i = 0; i < n - 1; i++) {
    cin >> d[i];
  }

  int a, b;
  cin >> a >> b;

  int answer = 0;

  for (int i = a - 1; i < b - 1; i++) {
    answer += d[i];
  }

  cout << answer << endl;

}