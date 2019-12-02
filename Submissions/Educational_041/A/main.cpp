#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<int> count(n);
  
  for (int i = 0; i < m; i++) {
    int c;
    cin >> c;
    count[c - 1]++;
  }

  int answer = m + 1;
  for (int i = 0; i < n; i++) {
    answer = min(answer, count[i]);
  }

  cout << answer << endl;

}