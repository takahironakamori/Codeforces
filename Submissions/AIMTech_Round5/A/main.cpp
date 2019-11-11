#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  vector<string> s(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  int answerN = 0;
  int answerM = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] == 'B') {
        answerN = i + 1;
        answerM = j + 1;
        count++;
      }
    }
  }

  int d = sqrt(count) / 2;
  
  cout << answerN - d << " " << answerM - d << endl;

}