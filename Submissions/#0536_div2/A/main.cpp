#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;

  vector<string> M(n);
  for (int i = 0; i < n; i++) {
    cin >> M[i];
  }
  
  int answer = 0;

  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      if (M[i][j] == 'X' &&
          M[i - 1][j - 1] == 'X' && 
          M[i - 1][j + 1] == 'X' && 
          M[i + 1][j - 1] == 'X' && 
          M[i + 1][j + 1] == 'X') {
        answer++;
      }
    }
  }

  cout << answer << endl;

}