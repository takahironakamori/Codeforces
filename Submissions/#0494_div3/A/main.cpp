#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> v(101);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    v[a]++;
  }

  int answer = 0;
  for (int i = 1; i <= 100; i++) {
    answer = max(answer, v[i]);
  }

  cout << answer << endl;

}