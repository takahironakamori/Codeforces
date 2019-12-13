#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n, m;
  cin >> n >> m;

  vector<vector<int>> count(m,vector<int>(5));
  
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for (int j = 0; j < m; j++) {
      count[j][(int) s[j] - 'A']++;
    }
  }

  int answer = 0;
  vector<int> mx(m);

  for (int i = 0; i < m; i++) {
    int p;
    cin >> p;
    for (int j = 0; j < 5; j++) {
      mx[i] = max(mx[i], count[i][j]);
    }
    answer += mx[i] * p;
  }

  cout << answer << endl;

}