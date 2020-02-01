### Codeforces Beta Round #16 (Div 2 Only)

# A. Flag

  [問題はこちら](https://codeforces.com/problemset/problem/16/A)

- 概要<br>
  n 行 × m 列 の旗がある。<br>
  この旗が以下の条件を満たす場合は YES を、<br>
  満たさない場合は NO を出力せよ。<br>
  ・i 番目の行の全ての列が同じ色であること。（色は 0 から 9 までの数値で表現する）<br>
  ・同じ色の行が 2 行以上続かないこと。


- 発想<br>
  1 行ごとに同じ数値か否かを確認する。<br>
  1 つ上の行と1つ下の行が同じ色か否かを確認する。


- コード（C++）

  ```cpp
  #include <bits/stdc++.h>
  using namespace std;


  int main() {

    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
      cin >> s[i];
    }

    string answer = "YES";

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m - 1; j++) {
        if (s[i][j] != s[i][j + 1]) {
          answer = "NO";
          break;
        }
      }
      if (answer == "NO"){
        break;
      }
    }

    if (answer == "YES") {
      for (int i = 1; i < n - 1; i++) {
        if (s[i - 1][0] == s[i][0] || s[i][0] == s[i + 1][0]) {
          answer = "NO";
          break;
        }
      }
    }

    cout << answer << endl;

    return 0;

  }
  ```
