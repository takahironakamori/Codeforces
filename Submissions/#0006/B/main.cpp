#include <bits/stdc++.h>
using namespace std;

int main() {

  int n, m;
  cin >> n >> m;

  char c;
  cin >> c;

  vector<string> room(n);
  for (int i = 0; i < n; i++) {
    cin >> room[i];
  }

  set<char> answer;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (room[i][j] == c){
        if (i != 0) {
          if (room[i - 1][j] != '.' && room[i - 1][j] != c) {
            answer.insert(room[i - 1][j]);
          }
        }
        if (i != n - 1) {
          if (room[i + 1][j] != '.' && room[i + 1][j] != c) {
            answer.insert(room[i + 1][j]);
          }
        }
        if (j != 0) {
          if (room[i][j - 1] != '.' && room[i][j - 1] != c) {
            answer.insert(room[i][j - 1]);
          }
        }
        if (j != m - 1) {
          if (room[i][j + 1] != '.' && room[i][j + 1] != c) {
            answer.insert(room[i][j + 1]);
          }
        }
      }
    }
  }

  cout << answer.size() << endl;

}