### Codeforces Beta Round #6

# B. President's Office

  [問題はこちら](https://codeforces.com/problemset/problem/6/B)
  
- 概要<br>
  n × m マスに分かれたフロアがある。<br>
  大統領の場所は文字列として与えられる。<br>
  大統領の部下の場所は別の文字列として与えられる。<br>
  空いている場合は . として与えられる。<br>
  大統領の場所に隣接している部下の場所は何種類あるか。<br>
  隣接に斜めは入らない。
  
  
- 発想<br>
  文字列が大統領の場所の場合は、その上下左右に大統領の場所と異なる場所の場合は、<br>
  set に入れて全部調べたら set の長さを表示する。

  
- コード（C++）

  ```cpp
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
  ```
    