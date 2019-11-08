#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<int> row(n);
  vector<int> col(n);
  for (int i = 0; i < n; i++) {
    string c;
    cin >> c;
    for (int j = 0; j < n; j++) {
      if (c[j] == 'C'){
        row[i]++;
        col[j]++;
      }
    }
  }

  int answer = 0;

  for (int i = 0; i < n; i++) {
    if (2 <= row[i]) {
      answer += (row[i] - 1) * row[i] / 2;
    }
    if (2 <= col[i]) {
      answer += (col[i] - 1) * col[i] / 2;
    }
  }
  
  cout << answer << endl;

}